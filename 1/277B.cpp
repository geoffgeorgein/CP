#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,k,c=0;
    cin>>m>>n;
    int a[m][n],b[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            a[i][j]=1;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>b[i][j];
            if(b[i][j]==0)
            {
                for(k=0;k<n;k++)
                    a[i][k]=0;
                for(k=0;k<m;k++)
                    a[k][j]=0;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c=0;
            if(a[i][j]!=0)
            {
                for(k=0;k<n;k++)
                {
                    if(b[i][k]!=1)
                        break;
                }
                if(k!=n)
                    break;
                for(k=0;k<m;k++)
                {
                    if(b[k][j]!=1)
                        break;
                }
                if(k!=m)
                    break;
            }
            if(b[i][j]!=0)
            {
                for(k=0;k<n;k++)
                {
                    if(a[i][k]==1)
                        c++;
                }
                for(k=0;k<m;k++)
                {
                    if(a[k][j]==1)
                        c++;
                }
                if(c==0)
                    break;
            }
        }
        if(j!=n)
            break;
    }
    if(i!=m)
        cout<<"NO";
    else
    {
        cout<<"YES"<<"\n";
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<"\n";
        }
    }
}