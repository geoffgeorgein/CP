#include <bits/stdc++.h>
using namespace std;
int main(){
  int H, W, N;
  cin >> H >> W >> N;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; i++){
    cin >> A[i] >> B[i];
  }
  vector<int> A2 = A;
  sort(A2.begin(), A2.end());
  A2.erase(unique(A2.begin(), A2.end()), A2.end());
  for (int i = 0; i < N; i++){
    A[i] = lower_bound(A2.begin(), A2.end(), A[i]) - A2.begin();
  }
  vector<int> B2 = B;
  sort(B2.begin(), B2.end());
  B2.erase(unique(B2.begin(), B2.end()), B2.end());
  for (int i = 0; i < N; i++){
    B[i] = lower_bound(B2.begin(), B2.end(), B[i]) - B2.begin();
  }
  for (int i = 0; i < N; i++){
    cout << A[i] + 1 << ' ' << B[i] + 1 << endl;
  }
}