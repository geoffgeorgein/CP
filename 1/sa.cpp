#include<iostream>
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
    int s=0;
   
    vector<int>a;
    for(int i=0;i<n;i++){

        a.push_back(i+1);
        s+=a[i];
    }
    cout<<"sum\n"<<s;
}