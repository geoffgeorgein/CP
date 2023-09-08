#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <array>
#include <bitset>
#include <complex>
using namespace std;
 
#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define ALL(c) (c).begin(), (c).end()
 
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;
 
int in() { int x; scanf("%d", &x); return x; }
ll lin() { ll x; scanf("%lld", &x); return x; }
 
int main() {
    int n, k;
    cin >> n >> k;
    if (n < k){
        cout << "NO" << endl;
        return 0;
    }
    VI ans(k, 1);
    n -= k;
    REP(i,k){
        while (n >= ans[i]){
            n -= ans[i];
            ans[i] *= 2;
        }
    }
    if (n){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        for (int x : ans) printf("%d ", x);
        cout << endl;
    }
    return 0;
}