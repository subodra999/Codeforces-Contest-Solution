#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	char ar[n][m];
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>ar[i][j];
			if(ar[i][j]=='B')
			cnt++;
			else if(ar[i][j]=='W')
			cnt++;
			else
			continue;
		}
	}
	if(cnt==(m*n))
	cout<<"#Black&White";
	else
	cout<<"#Color";
}
