#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<utility>

using namespace std;

int main() {
     #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
    int n,b,i,j;
    cin>>n;

    vector<string>a(n);
    vector<pair<int,int>>l;
    int c=0;

    for(int i=0;i<n;i++){

        cin>>a[i];

        for(int j=0;j<n;j++){

            

            if(a[i][j]=='*'){
                
                l.push_back({i,j});
            }
           

        }
    }
   
    //cout<<l[1].first<<" "<<l[1].second<<endl;
    if(l[0].first==l[1].first){

        if(l[0].first>0){
            a[l[0].first -1][l[0].second]='*';
            a[l[1].first -1][l[1].second]='*';
        }
        else{
           a[l[0].first +1][l[0].second]='*';
            a[l[1].first +1][l[1].second]='*'; 
        }
    }
    else if(l[0].second==l[1].second)
    {
        if(l[0].second>0){
            a[l[0].first][l[0].second-1]='*';
            a[l[1].first][l[1].second-1]='*';
        }
        else{
            a[l[0].first][l[0].second+1]='*';
            a[l[1].first][l[1].second+1]='*';
        }

    }
    else{

        a[l[0].first][l[1].second]='*';
        a[l[1].first][l[0].second]='*';

    }
    for(int i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}
//cout<<endl; 
    
	}
	
}
