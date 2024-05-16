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
 

void solve(){
}
//This function is solution
int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        
        while (low <= high) {
            int mid = high - (high - low)/2;
            if (nums[mid] == target) {
                return mid;
            }
            if(nums[low] < nums[mid]) {
                if(nums[mid] >= target && target >= nums[low]) {
                    high = mid - 1;
                } else low = mid + 1;
            } else {
                if(nums[mid] <= target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        
        return -1;
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