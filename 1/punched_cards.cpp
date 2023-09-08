#include<bits/stdc++.h>


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

    int r,c;

    

    string p=".|";
    string q="|.";


    for(int t_i = 0; t_i < T; t_i++)
    {
        cin>>r>>c;
        
        string d="";
        for(int i=0;i<c;i++){
            d+="+-";
        }
        d+="+";
        
        
        vector<string>s={"..+-+","..|.|","+-+-+","|.|.|","+-+-+"};

        for(int i=1;i<2*r;i+=1){

            for(int j=0;j<c-2;j++){

                if(i<4){
                    s[i]+=p;
                    
                    //s[i-1]+="-+";
                    
                }
                else{
                    string ss="";
                    for(int i=0;i<c;i++){
                        ss+="|.";
                    }
                    ss+="|";
                    
                    s.push_back(ss);
                    s.push_back(d);

                }

                if(j==c-3){
                    i++;
                }
                
                
            }
        }

        cout<<"case "<<t_i+1<<'\n';

        for(int i=0;i<2*r+1;i++){

            cout<<s[i]<<'\n';
        }


    }
}