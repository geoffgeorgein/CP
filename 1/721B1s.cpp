void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if (n%2==0||s[n/2]=='1')
    {
        cout<<"BOB\n";
        return;
    }
    for (int i=0;i<n/2;++i)
        if (s[i]=='0')
        {
            cout<<"ALICE\n";
            return;
        }
    cout<<"BOB\n";
}
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    while (n--)
        solve();
    return 0;
}