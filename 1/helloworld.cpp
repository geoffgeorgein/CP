
#include<iostream>

using namespace std;

int main(){

    cout<<"Hello World";

    string s;

    cin>>s;

    int n=s.length();
    int f=0;

    for(int i=0;i<n/2;i++){

        if(s[i]!=s[n-i-1]){
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"It is Palindrome";
    }
    else{
        cout<<"It is not Palindrome";
    }
}