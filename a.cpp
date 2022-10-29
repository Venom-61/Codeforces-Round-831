#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> p;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if(x > y) swap(x, y);
        p.push_back({x, y});
    }
    sort(p.begin(), p.end());

    if(n == 1) {
        cout << p[0].first * 2 + p[0].second * 2 << "\n";
        return;
    }

    ll ans= 0;
    for(int i = 0; i < n; i++) {
        ans += p[i].first * 2;
    }

    int a = p[0].second;
    int b = p[1].second;
    ans += a + b;

    for(int i = 2; i < n; i++) {
        if(i == 1) ans += abs(p[i].second - a);
        if(i == n - 1) {
            ans += abs(p[i].second - b);
            break;
        }
        ans += abs(p[i].second- p[i+1].second);
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
