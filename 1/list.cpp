#include<iostream>
#include<algorithm>
#include<vector>
#include<list>

using namespace std;
void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << *it<<" ";
    cout << '\n';
}
  

int main()

{  
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    
     int n,b,k;
     int c=0;
    list<int>a;
    cin>>n>>k;
    for(auto i=0;i<n;i++)
    {
        cin>>b;
        a.push_back(b);
    }
    a.sort();
    //sort(a.begin(),a.end());
    showlist(a);
    
        
    
    cout<<endl;
     
    a.pop_front();    
    //a.pop_front();  
    a.push_front(5);
    a.pop_back();
    showlist(a);
    a.sort();
    cout<<"Front"<<a.front()<<endl;
    cout<<(a.size())<<endl;
    a.reverse();
    for(auto i=a.begin();i!=a.end();i++){
        cout<<*i<<" ";
}
}
    
  

