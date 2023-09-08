# include <iostream>
  using namespace std;
  int main()
  {
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif
      long long i, n;
      string a, b;
      cin >> a >> b;
      n = a.size();
      for(i = 0; i < n; i++){
         cout << (a[i] != b[i]);
      }
      return 0;
  }