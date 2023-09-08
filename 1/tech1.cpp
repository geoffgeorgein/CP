/* Read input from STDIN. Print your output to STDOUT*/

#include<string>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    
    string v;
    int n;
    cin>>v;
    cin>>n;
    while(n--){
        string b;
        
        cin>>b;
        int j=0;
        int f=0;
        for(int i=0;i<v.length();i++){

            if(b[j]==v[i]){
                j+=1;
            }
            if(j==b.length()){
                f=1;
                break;
            }
            
        }
        
        if(f==1){
            cout<<"POSITIVE"<<endl;
        }
        else{
            cout<<"NEGATIVE"<<endl;
        }
  

    }
    
    //Write code here
}



