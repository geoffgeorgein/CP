/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include<string>
#include<iostream>
#include<algorithm>
#include<vector>

int n=1000000;
using namespace std;

vector<int>a;

void primesieve(int n){


bool prime[n+1];
memset(prime,1,n);
prime[0]=0;prime[1]=0;
for (int i=2;i*i<=n;i++){

    if (prime[i]==1){

        for(int j=i*i;j<=n;j+=i){
            prime[j]=0;
        }
    }
}
for(auto i=0;i<n;i++){
    if(prime[i]){
        a.push_back(i);

    }

}
}




int main()
{
    int t;
    primesieve(n);
    cin>>t;
    while(t--){

        int l,r;
        cin>>l>>r;
        int f=0;
        int g=0;
        for(int i=0;i<n;i++){

            if(l<=a[i]){
                 int p=a[i];
                 f=1;
            }
            if(a[i]>=r){
                int q=a[i];
                g=1;
                break;
            }
            
       
        }
        if(f+g==2){
            cout<<(q-p)<<endl;
        }
        else if(f+g==1){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        


    }
    
    //Write code here
}
