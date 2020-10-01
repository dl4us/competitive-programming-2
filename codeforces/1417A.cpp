// https://codeforces.com/contest/1417/problem/0

#include <bits/stdc++.h>
using namespace std;
// #define cerr if(false) cerr
#define watch(x) cerr << (#x) << " is " << (x) << endl;
#define endl '\n'
#define ld long double
#define int long long
#define pii pair<int, int>
#define fi first
#define se second
#define sz(a) (int)a.size()
#define all(x) (x).begin(), (x).end()

const int maxn = 1500;

int a[maxn];

void solve() {
    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a+1, a+n+1);

    int ans = 0;
    for(int i = 2; i <= n; i++) {
        int have = max(0LL, k-a[i]);

        ans += have/a[1];
    }

    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) solve();
}

/*

*/

// Did you read the bounds?
// Did you make typos?
// Are there edge cases (N=1?)
// Are array sizes proper (scaled by proper constant, for example 2* for koosaga tree)
// Integer overflow?
// DS reset properly between test cases?
// Is using long longs causing TLE?
// Are you using floating points?