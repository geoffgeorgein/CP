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
    int a,b,c;
    
    cin>>a>>b>>c;

    if(a==1 && b==1 && c==1){
        cout<<3;
        return 0;
    }
    if(a==1 &&c==1){
        cout<<(a+b+c);
        return 0;
    }
    
    if(a==1||b==1||c==1){


        cout<<max((a+b)*c,a*(b+c));
    }
    else{
        cout<<(a*b*c);
    }

    
    cout<<endl;
  
    
    //Write code here
}



