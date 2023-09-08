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
    
     int n,b;
    vector<int>a={1,2,3,4,6};
    vector<int>::iterator i;
    cin>>n;
 
    sort(a.rbegin(),a.rend());
    for( i=a.begin();i<a.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    

}