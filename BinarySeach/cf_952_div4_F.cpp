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

int h, n;
vector<int> a(n), c(n);

bool check(ll mid)
{
  ll sum = 0;
  fo(i, 0, n)
  {
    ll dame = (mid + c[i] - 1) / c[i] * a[i];
    sum += dame;
  }
  return sum >= h;
}

void solve()
{
  cin >> h >> n;
  a.resize(n);
  c.resize(n);
  fo(i, 0, n)
  {
    cin >> a[i];
  }
  fo(i, 0, n) cin >> c[i];
  ll l = 1;
  ll r = (h / a[0] + 1);
  r *= c[0];
  ll ans = r;
  while (l <= r)
  {
    ll mid = l + (r - l) / 2;
    if (check(mid))
    {
      ans = mid;
      r = mid - 1;
    }
    else
      l = mid + 1;
  }
  cout << ans << "\n";
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}