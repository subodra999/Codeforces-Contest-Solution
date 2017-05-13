#include<bits/stdc++.h>
#define ll long int
using namespace std;
int dp[100000];
int main()
{
	int n,a,b;
	cin>>n;
	int dp[n+1][2];
	for(int i=0;i<=n;i++)
		dp[i][0]=dp[i][1]=0;
	int l=((n*(n-1))/2)-1;
	for(int i=0;i<l;i++)
	{
		cin>>a>>b;
		dp[a][0]++;
		dp[b][1]++;
	}
	int j=0,g[2];
	for(int i=1;i<=n&&j<2;i++)
	{
		if((dp[i][0]+dp[i][1])==(n-1))
			continue;
		else
			g[j++]=i;
	}
	
		if(dp[g[0]][0]>dp[g[1]][0])
		cout<<g[0]<<" "<<g[1];
		else
		cout<<g[1]<<" "<<g[0];
	
	return 0;
}
