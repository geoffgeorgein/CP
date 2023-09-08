// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>

#define deb(x)         cout << #x << "=" << x << endl

using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        //vector<int>a,b;
        stack<int>s;
        
        Node*ptr=head;
        
        if(ptr==NULL){
            return true;
        }
        int ct=0,f=0;
        while(ptr->next!=NULL){
            //a.push_back(ptr->data);
            s.push(ptr->data);
            ptr=ptr->next;
        }
       // b=a;
        //reverse(b.begin(),b.end());
        ptr=head;
        while(head!=NULL){
            
            int p=head->data;
            int q=s.top();
            
            if(p!=q){
                f=1;
                break;
            }
            head=head->next;
            s.pop();
            deb(p);
            deb(q);
            
        }
        
  
        if(f==0){
            return true;
        }
        else{
            return false;
        }
        
        
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output11.txt", "w", stdout);
    #endif
    
    int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends