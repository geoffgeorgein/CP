#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main()

{  
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    
    string s;
    int n,b;
    vector<int>a={1,2,3,4,6};
    std::string::iterator i;
    std::string::reverse_iterator ir;
   // vector<int>::iterator i;
    //cin>>n;
    getline(cin,s);
    sort(s.rbegin(),s.rend());
    for(ir=s.rbegin();ir< s.rend();ir++){
        cout<<*ir<<" ";
    }
    cout<<endl;
    for(i=s.begin();i< s.end();i++){
        cout<<*i<<" ";
    }
    

}