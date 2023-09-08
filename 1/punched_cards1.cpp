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

    

    

    string p=".|";
    string q="|.";


    for(int t_i = 0; t_i < T; t_i++)
    {
        int r,c;
        cin>>r>>c;
        
        string d="";
        for(int i=0;i<c;i++){
            d+="+-";
        }
        d+="+";
        
        
        vector<string>s;

        for(int i=0;i<=2*r;i+=1){

            


            if(i%2==0){
                string sp="";

                if(i==0){
                    sp+="..";
                    for(int j=0;j<c-1;j++){

                        sp+="+-";
                    }
                    sp+="+";
                }
                else{

                    for(int j=0;j<c;j++){
                        sp+="+-";
                    }
                    sp+="+";
                }

                s.push_back(sp);
            }
            else{

                string sq="";

                if(i==1){

                    sq+="..";

                    for(int j=0;j<c-1;j++){
                        sq+="|.";
                    }
                    sq+="|";
                }
                else{

                    for(int j=0;j<c;j++){

                        sq+="|.";
                    }
                    sq+="|";
                }

                s.push_back(sq);


            }
            
            }
          //  deb(s.size());

               
                
            
        

        cout<<"case #"<<t_i+1<<':'<<'\n';

        for(int i=0;i<2*r+1;i++){

            cout<<s[i]<<'\n';
        }


    }
}