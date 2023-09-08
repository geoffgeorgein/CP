#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>


int gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


using namespace std;

int main(){

        #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif

    int t;
    cin>>t;
    while(t--){

        long long n;
        cin>>n;
        vector<long long>a;

        for(long long i=0;i<n/2;i++){
            a.push_back(2*(i+1));
        }

        for(long long i=0;i<n/2;i++){
            a.push_back(2*(i+1)-1);
        }
      //  for(int i=0;i<n;i++){
        //    cout<<a[i]<<" ";
        //}
       // cout<<endl;
        a[n-1]+=((n/2*(n/2+1))-(n/2*n/2));

        if(n/2%2==0){
            cout<<"YES"<<endl;

            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }

}


