// http://codeforces.com/contest/231/problem/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int res = 0;
    while(n--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b + c >= 2) res++; 
    }

    cout << res << endl;
}
