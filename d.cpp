#include<bits/stdc++.h>
using namespace std;

#define ll long long

// D. Knowledge Cards

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(k);
    for(int i = 0; i < k; i++) 
        cin >> a[i];
    
    int spaces_left = n*m - 2;
    int to_move = k;
    map<int, bool> vis;

    bool ok = true;

    for(int i = 0; i < k; i++) {
        vis[a[i]] = true;
        if(a[i] == to_move) {
            if(spaces_left >= 2) {
                to_move--;
                while(vis[to_move]) {
                    spaces_left++;
                    to_move--;
                }
            } else 
                ok = false;
        } else 
            spaces_left--;
    }

    ok ? cout << "YA\n" : cout << "TIDAK\n";
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
