#include<iostream>
#include<algorithm>
#include<vector>
#include <math.h>

using namespace std;

int main()

{  
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    
     int n,t,b;
    
    cin>>t;
    while(t--){
        
      cin>>n;
      int f=0;
      vector<int>a(n);

      for(int i=0;i<n;i++){
          cin>>a[i];
      }

      for(int i=0;i<n;i++){

          long long sq=sqrt(a[i]);
          if(sq*sq!=a[i]){
              f=1;
              break;

          }
       
      }
      if(f==1){
          cout<<"YES";
      }
      else{
          cout<<"NO";
      }
      cout<<endl;

   

}
}