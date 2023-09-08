#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b;
    cin>>a>>b;
    int s=0;int d=0;
    if(a%2!=0){
        s=0;
    }
    else{
    
    s=a/2;
        }
    if(b%2!=0){
        d=0;
    }
    else{

        d=b/2;
    }
    

    if(s==d){
        cout<<0;
    }
    else{
        if(s>d){
            cout<<"S"<<" "<<s;
        }
        else{
            cout<<"D"<<" "<<d;
        }
    }
    cout<<endl;
    
    return 0;
}
