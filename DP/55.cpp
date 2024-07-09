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
  bool canJump(vector<int> &nums)
  {
    int n = nums.size();
    bool canVisit[n];
    canVisit[0] = true;
    for (int i = 1; i < n; i++)
      canVisit[i] = false;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
      if (!canVisit[i])
        return false;
      else
      {
        int target = min(i + nums[i], n - 1);
        if (target > index)
        {
          for (int j = index + 1; j <= target; j++)
            canVisit[j] = true;
          index = target;
        }
      }
    }
    return true;
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