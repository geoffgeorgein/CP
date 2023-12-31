#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int N, K;
    cin >> N >> K;
    for(int k=1; k<=2; k++){
        vector<int> ans(K, k);
        int R = N-k*K;
        if(R >= 0 && R % 2 == 0){
            ans[0] += R;
            cout << "YES" << endl;
            for(int a : ans) cout << a << " ";
            cout << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
 
int main(){
    int T;
    cin >> T;
    while(T--) solve();
    return 0;
}