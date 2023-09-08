#include <bits/stdc++.h>
 
 
using namespace std;
#define int long long
 
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    for (int z = 0; z < t; ++z) {
        int n;
        cin >> n;
        if (n == 2) cout << -1 << endl;
        else{
            int cnt = 1;
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (cnt > n * n) cnt = 2;
                    cout << cnt << " ";
                    cnt += 2;
                }
                cout << endl;
            }
        }
    }
}