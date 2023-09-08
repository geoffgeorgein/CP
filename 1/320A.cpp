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
    int n;
    
    cin>>n;
    int c=0;
    while(n>0){

        if((n&1)){
            c+=1;

        }
        n=n>>1;

    }
    cout<<c<<endl;
  
    
    //Write code here
}



