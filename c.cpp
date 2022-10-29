#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int ans = 0;
    for(int i = 0; i < n - 2; i++) {
        ans = max(ans, a[i+1] - a[i] + a[n-1] - a[i]);
    }

    for(int i = 1; i < n - 1; i++) {
        ans = max(ans, a[i+1] - a[i] + a[i+1] - a[0]);
    }

    cout << ans << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);

    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        // cout << "Case: #" << i << " ";
        solve();
    }

    return 0;
}
