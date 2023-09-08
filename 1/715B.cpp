#include<iostream>
#include<algorithm>
#include<vector>

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
        vector<char>a(n);
        vector<int>h,l;
        
        int f=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]=='T'){
                h.push_back(i);
            }
            else{
                l.push_back(i);

            }
        }
        if(h.size()!=2*(l.size())){
            f=1;
            cout<<"NO"<<endl;
            continue;
            
        }
        for(int i=0;i<l.size();i++){
            if(l[i]<h[i] || l[i]>h[l.size()+i]){
                cout<<"NO"<<endl;
                f=1;
                break;
            }
        }
        if(f==0){

            cout<<"YES"<<endl;
        }
       
        
        }

   

}