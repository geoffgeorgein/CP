
#include <bits/stdc++.h>
using namespace std;
 
int main(void){

    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif
  int n;cin >> n;
  string s; cin >> s;
  int q;cin >> q;
  bool rev_flg = false;
  for (int i= 0; i<q;i++){
    int t,a,b;cin >> t >> a >> b;
    if(t==1){
      char temp;
      if(rev_flg){
        if(a>n){
          a = a-n;
        }else{
          a = a+n;
        }
        if(b>n){
          b = b-n;
        }else{
          b = b+n;
        }
      }
      temp = s[a-1];
      s[a-1] = s[b-1];
      s[b-1] = temp;
    }else if(t==2){
      rev_flg = !rev_flg;
    }
  }
  if (rev_flg){
    string temp1;
    string temp2;
    temp1 = s.substr(0,n);
    temp2 = s.substr(n,n);
    s = temp2 + temp1;
  }
  cout << s << endl;
  
 
}