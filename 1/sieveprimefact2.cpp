// C++ program to find prime factorization of a
// number n in O(Log n) time with precomputation
// allowed.
#include "bits/stdc++.h"
using namespace std;

#define MAXN 100001

// stores smallest prime factor for every number
int spf[MAXN];

// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
	spf[1] = 1;
	for (int i=1; i<MAXN; i++)

		
		spf[i] = i;


	for (int i=2; i*i<MAXN; i++)
	{
	
		if (spf[i] == i)
		{
			
			for (int j=i*i; j<MAXN; j+=i)

				
				if (spf[j]==j)
					spf[j] = i;
		}
	}
}


vector<int> getFactorization(int x)
{
	vector<int> ret;
	while (x != 1)
	{
		ret.push_back(spf[x]);
		x = x / spf[x];
	}
	return ret;
}

int main()
{
	
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	sieve();
	int x;
	cin>>x;

	// calling getFactorization function
	vector <int> p = getFactorization(x);

	for (int i=0; i<p.size(); i++)
		cout << p[i] << " ";
	cout << endl;
	return 0;
}
