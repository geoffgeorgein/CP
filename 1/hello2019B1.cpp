#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int n, a[20];
 
int main() {
    #ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
	
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < (1 << n); i++) {
		int cur = 0;
		for(int j = 0; j < n; j++)
			cur += (i >> j & 1) ? a[j] : -a[j];
		if(cur % 360 == 0)
			return 0 * puts("YES");
	}
	puts("NO");
	
	return 0;
}