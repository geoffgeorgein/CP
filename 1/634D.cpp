#include<iostream>
#include <sstream>
#include<algorithm>
#include<vector>
#include<list>
#include<string>
#include<cmath>
#include<map>

using namespace std;

int main(){

int t;

#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
cin>>t;

while(t--){


vector<string>a(9);


for(int i=0;i<9;i++){
    cin>>a[i];
}

int j=1;

for(int i=0;i<3;i++){

    

    a[i][j]=a[i][j-1];
    j+=3;
        

}
  j=8;
for(int i=3;i<6;i++){

  

    a[i][j]=a[i][j-1];
    j-=3;
        
}
j=0;
for(int i=6;i<9;i++){

  

    a[i][j]=a[i][j+1];
    j+=3;
        
}

//

for(int i=0;i<9;i++){
    cout<<a[i]<<endl;
}



cout<<endl;



    
}




}