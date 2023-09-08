#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>

using namespace std;
#ifndef ONLINE_JUDGE


int maxn=1e7+7;


bool pr[1000010];
using namespace std;

bool issquare(long long x)
{
    long long y=sqrt(x);

    return (y*y==x);
}
int main(){
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif

memset(pr,1,sizeof(pr));
pr[0]=0;pr[1]=0;
for (int i=2;i*i<=1000001;i++){

    if (pr[i]==1){

        for(int j=i*i;j<=1000001;j+=i){
            pr[j]=0;
        }
    }
}

    int n;
    long long x;
    cin>>n;

    while(n--){
        cin>>x;
        if(issquare(x)&&pr[int(sqrt(x))]){

            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<'\n';
    }
   
    
 

}