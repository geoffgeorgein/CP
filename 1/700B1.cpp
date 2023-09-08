#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
  ios::sync_with_stdio(false);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif
  int tt;
  cin >> tt;
  while (tt--) {
    long long A, H, n;
    cin >> A >> H >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      H -= (long long) (x + A - 1) / A * a[i];
    }
    cout<<(H + *max_element(a.begin(), a.end()))<<endl;
    cout << (H + *max_element(a.begin(), a.end()) > 0 ? "YES\n" : "NO\n");
  }
  return 0; 
}