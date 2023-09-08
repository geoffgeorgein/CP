
#include<iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif


int a,b;
int i=0;
cin >>a>>b;

while (a<=b)

{
i+=a;
a+=1;
}

cout<<(i)<<endl;
return 0;
}