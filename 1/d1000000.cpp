#include<bits/stdc++.h>

#define deb(x)      cout << #x << "=" << x << endl

using namespace std;


int main() {

     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output11.txt", "w", stdout);
    #endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tt=0;tt<T;tt++){


        int n;
        cin>>n;
        vector<int>a(n);

        for(int i=0;i<n;i++){

            cin>>a[i];
        }

        sort(a.begin(),a.end());

        int k=0;
        //deb(k);

        for(int i=0;i<n;i++){

            if(a[i]>k){
                k++;
            }
        }
       //);

        cout<<"Case #"<<tt+1<<':'<<" "<<k<<'\n';

    }



}
