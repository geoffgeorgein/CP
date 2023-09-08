#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif

    bool l[90000000];

    vector<int>primes;
    int n,t;
    int maxn=90000001;
    l[0]=l[1]=true;

    for(int i=2;i*i <maxn;i++){

        if(l[i]==false){

            for(int j=i*i;j<maxn;j+=i){
                l[j]=true;
            }
        }
    }

    for(int i=0;i<maxn;i++){
        if(!l[i]){
            primes.push_back(i);
        }
    }
cin>>n;
    for(int i=0;i<n;i++){
        cout<<primes[i]<<" ";
    }
//cin>>t;
//while(t--){
  //  cin>>n;
    //cout<<primes[n-1]<<endl;
//}
    

}