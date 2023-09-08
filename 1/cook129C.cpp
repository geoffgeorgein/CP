#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    int g,p;
	    vector<int>a(10);
	    long long s=0;
	    int c=0;
	    
	    cin>>g>>p;
        //cout<<g<<" "<<p<<endl;
	    for(int i=9;i>=0;i--){
	        cin>>a[i];
	    }
	    int i=0;
        int pos;
        int k=p;
	    while(i<=(10-g)){
            p=k;
	        if(a[i]-p<=0){

                p-=a[i];
                a[i]=0;
                
	          int f=0;
              if(i==10-g-1){
                  i=i+1;
                  c+=1;
                  break;
              }
              while(p>0){
                  i+=1;
                  int d=p;
                  p-=a[i];
                  a[i]-=d;

                  f+=1;

                  


              }
              
              if(a[i]==0){

                  if(10-g==i){

                      
                      i+=1;
                      c+=1;
                      break;
                  }
                  i+=1;
              }
              c+=1;
	          
	        }
	        else{
                a[i]-=p;
	            c+=1;
	        }
	       
	    }
	    cout<<i<<" "<<c<<endl;
	}
	return 0;
}
