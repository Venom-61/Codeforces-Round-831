#include<bits/stdc++.h>
using namespace std;

#define ll long long

// Jumbo Extra Chees 2

void solve() {
    int n;
    cin >> n;
    ll ans = 0;
    vector<int> h;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if(b > a) swap(a, b);
        ans += b;
        h.push_back(a);
    }

    ans *= 2;

    sort(h.begin(), h.end());
    for(int i = 1; i < n; i++) {
        ans += (h[i] - h[i-1]);
    }

    ans += (h[0] + h[n-1]);
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
