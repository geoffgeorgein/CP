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


        int a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3;

        cin>>a1>>b1>>c1>>d1;
        cin>>a2>>b2>>c2>>d2;
        cin>>a3>>b3>>c3>>d3;

        int a=min({a1,a2,a3});
        int b=min({b1,b2,b3});
        int c=min({c1,c2,c3});
        int d=min({d1,d2,d3});

        
        if(a+b+c+d<1000000){

            cout<<"Case #"<<tt+1<<':'<<'\n';
            cout<<"IMPOSSIBLE"<<'\n';
        }
        else{

            cout<<"Case #"<<tt+1<<':'<<'\n';

            int ans=1000000;

            cout<<a<<" ";

            ans-=a;
            if(ans>0){
                cout<<min(ans,b)<<" ";
                ans-=min(ans,b);
                //cout<<b<<" ";

                if(ans>0){

                    cout<<min(ans,c)<<" ";
                    ans-=min(ans,c);

                    if(ans>0){

                        cout<<min(ans,d)<<'\n';
                        ans-=min(ans,d);
                    }
                    else{
                        cout<<0<<'\n';
                    }

                }
                else{
                    cout<<0<<" "<<0<<'\n';

                }
            }
            else{

                cout<<0<<" "<<0<<" "<<0<<'\n';
            }

        }

    }

    

    

    


}
