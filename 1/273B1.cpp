#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll c2(ll a) { return a * (a - 1) / 2; }
 
int main() {
	 #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output1.txt", "w", stdout);
    #endif
	ll n, m; cin >> n >> m;
	cout << c2(n / m) * (m - n % m) + c2(n / m + 1) * (n % m) << ' ';
	cout << c2(n - m + 1) << '\n';
	return 0;
}