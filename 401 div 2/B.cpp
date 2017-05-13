#include<bits/stdc++.h>
#define ll long long int
#define lpi(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int main()
{
	int n;
	cin >> n;
	int ar1[n],ar2[n];
	lpi(i,0,n-1)
	{
		scanf("%1d",&ar1[i]);
	}
	lpi(i,0,n-1)
	{
		scanf("%1d",&ar2[i]);
	}
	sort(ar1,ar1+n);
	sort(ar2,ar2+n,greater<>());
	int cnt1=0,cnt2=0;
	lpi(i,0,n-1)
	{
		if(ar1[i]>ar2[i])
		{
			cnt1++;
		}
		else if(ar2[i]>ar1[i])
		{
			cnt2++;
		}
	}
	cout << cnt1 << endl;
	cout << cnt2;
}