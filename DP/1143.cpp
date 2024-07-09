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
    int longestCommonSubsequence(string text1, string text2) {
      int m = text1.length();
      int n = text2.length();
        int dp[m+1][n + 1];
        for(int i = 0; i <= m; i++) dp[i][0] = 0;
        for(int i = 0; i <= n; i++) dp[0][i] = 0;
        for(int i = 1; i <= m; i++) {
          for(int j = 1; j <= n; j++) {
            if(text1[i-1] == text2[j-1]) {
              dp[i][j] = dp[i-1][j-1] + 1;
            } else {
              dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
          }
        }
        return dp[m][n];
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