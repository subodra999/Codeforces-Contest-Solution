#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll n,m;
	cin >> n >> m;
	int ar[n+2][m+1];
	for(int i=1 ; i<=n ; i++)
	{
		for (int j=1 ; j<=m ; ++j)
		{
			cin >> ar[i][j];
		}
	}
	int dp[n+1][m+1];
	int max[n+1];
	for (int i = 0; i <= m; ++i)
	{
		ar[n+1][i] = 0;
	}
	for(int i=0;i<=n;i++)
	{
		max[i] = 0;
	}
	for(int i=n;i>=1;--i)
	{
		for(int j=m;j>=1;--j)
		{
			if(ar[i+1][j] >= ar[i][j])
				dp[i][j] = dp[i+1][j];
			else
				dp[i][j] = i;
			if(max[i] < dp[i][j])
				max[i] = dp[i][j];
		}
	}
	ll q,l,r;
	cin >> q;
	while(q--)
	{
		cin >> l >> r;
		if(max[l] >= r)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

}