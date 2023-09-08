#include<iostream>
#include<algorithm>
#include<vector>
#include <math.h>
#include<string>
#include <iomanip>
#include <cmath>

using namespace std;
const int mod=1e9+7;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int arr[], int n)
{
    // Initialize result
    int ans = arr[0];
 

    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}

    int main()

    {  
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif
        
        int x1,y1,x2,y2;
        
   
        cin>>x1>>y1>>x2>>y2;

        if(x1!=x2 && y1!=y2 && abs(x1-x2)!=abs(y1-y2)){
 
        cout<<-1;
            
        }
        else if(y1==y2){

            cout<<x1<<" "<<(y1+abs(x1-x2))<<" "<<x2<<" "<<(y2+abs(x1-x2));
        }
        else if(x1==x2){

            cout<<(x1+(y1-y2))<<" "<<y1<<" "<<(x2+(y1-y2))<<" "<<y2;
        }
        else{
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
        }

          

        cout<<endl;
        
     

    
    }


        
  