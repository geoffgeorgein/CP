#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
 
#define FOR(it, c) for(__typeof((c).begin()) it = (c).begin(); it != (c).end(); it++)
#define SZ(c) ((int)(c).size())
 
int main(void) {
	int n, a[105]={}, ans=-100, s=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%d", &a[i]);
	for(int i=0;i<n;i++) s+=a[i];
	for(int i=0;i<n;i++) {
		int r=s;
		for(int j=i;j<n;j++) ans=max(ans,r += a[j]?-1:1);
	}
	printf("%d\n", ans);
	return 0;
}