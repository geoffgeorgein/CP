#include <bits/stdc++.h>
using namespace std;
#ifdef tabr
#include "library/debug.cpp"
#else
#define debug(...)
#endif

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x, y;
    cin >> n >> x >> y;
    int inf = (int) 1e9;
    vector<vector<int>> dp(x + 1, vector<int>(y + 1, inf));
    dp[0][0] = 0;
    for (int k = 0; k < n; k++) {
        int a, b;
        cin >> a >> b;
        for (int i = x; i >= 0; i--) {
            for (int j = y; j >= 0; j--) {
                int ni = min(x, i + a);
                int nj = min(y, j + b);
                dp[ni][nj] = min(dp[ni][nj], dp[i][j] + 1);
            }
        }
    }
    if (dp[x][y] == inf) {
        cout << -1 << '\n';
    } else {
        cout << dp[x][y] << '\n';
    }
    return 0;
}