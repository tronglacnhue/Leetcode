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
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<ll> vl;
typedef vector<int> vi;
#define fo(i, a, n) for(int i = a; i < n; i++)
#define fi(i, n, a) for(int i = n; i >= a; i--)
#define mp make_pair
#define pb push_back
#define INF 2e18
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int res = 0;
        
        fo(i, 0, m) {
          fo(j, 0, n) {
            if(grid[i][j] == '1') {
              dfs(grid, i, j, m, m);
              res++;
            }
          }
        }
        return res;
    }
private:
    void dfs(vector<vector<char>>& grid, int i, int j, int m, int n) {
      if(i < 0 || j < 0 || i >= m|| j >= n || grid[i][j] == "0") return;
      grid[i][j] = '0';
      dfs(grid, i-1, j, m, n);
      dfs(grid, i+1, j, m, n);
      dfs(grid, i, j-1, m, n);
      dfs(grid, i, j+1, m, n);
    }
};

 

void solve(){
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    while(t--){
       solve();
    }
    return 0;
}