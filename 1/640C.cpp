/* Read input from STDIN. Print your output to STDOUT*/

#include<string>
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
    int n,t,k;
    
    cin>>t;

    while(t--){

        long long c=1;
        long long s=0;

        cin>>n>>k;
        long long d=n;
        while (n<=1000000009){

            c+=d;
            s=(n-1);

            n+=d;
            if(s>=k){
                break;
            }

        }
        


    }

    cout<<endl;
  
    
    //Write code here
}



