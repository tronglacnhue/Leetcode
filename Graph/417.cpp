#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <array>
#include <iomanip>

using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<int> vi;
#define fo(i, a, n) for (int i = a; i < n; i++)
#define fi(i, n, a) for (int i = n; i >= a; i--)
#define mp make_pair
#define pb push_back
#define INF 2e18
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

class Solution
{
public:
  vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights)
  {
    int m = heights.size();
    int n = heights[0].size();

    vector<vector<bool>> pacific(m, vector<bool>(n));
    vector<vector<bool>> atlantic(m, vector<bool>(n));

    for (int i = 0; i < m; i++)
    {
      dfs(heights, pacific, i, 0, m, n);
      dfs(heights, atlantic, i, n - 1, m, n);
    }

    for (int j = 0; j < n; j++)
    {
      dfs(heights, pacific, 0, j, m, n);
      dfs(heights, atlantic, m - 1, j, m, n);
    }

    vector<vector<int>> result;

    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (pacific[i][j] && atlantic[i][j])
        {
          result.push_back({i, j});
        }
      }
    }

    return result;
  }

private:
  void dfs(vector<vector<int>> &heights, vector<vector<bool>> &visited,
           int i, int j, int m, int n)
  {

    visited[i][j] = true;

    if (i > 0 && !visited[i - 1][j] && heights[i - 1][j] >= heights[i][j])
    {
      dfs(heights, visited, i - 1, j, m, n);
    }
    if (i < m - 1 && !visited[i + 1][j] && heights[i + 1][j] >= heights[i][j])
    {
      dfs(heights, visited, i + 1, j, m, n);
    }
    if (j > 0 && !visited[i][j - 1] && heights[i][j - 1] >= heights[i][j])
    {
      dfs(heights, visited, i, j - 1, m, n);
    }
    if (j < n - 1 && !visited[i][j + 1] && heights[i][j + 1] >= heights[i][j])
    {
      dfs(heights, visited, i, j + 1, m, n);
    }
  }
};

void solve()
{
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t;
  while (t--)
  {
    solve();
  }
  return 0;
}