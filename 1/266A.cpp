#include<iostream>
#include<algorithm>
#include<vector>
#include <math.h>
#include<string>
#include <iomanip>
#include <cmath>
#include <map>
 
using namespace std;
const int mod=1e9+7;
 
    int main()
 
    {  
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif

     int t;

     int n,m,a,b;
     
    cin>>n>>m>>a>>b;

    if(m*a<=b){
        cout<<n*a<<endl;
        return 0;
    }


    cout<<int(min(float((n/m)*b+(n%m)*a),ceil(float(n)/m)*b))<<endl;
     

        

    }
        