#include<iostream>
using namespace std;
int main()
{
	long long int n,m,t;
	cin>>n>>m>>t;
	long long int ans;
	if(n<m)
	{
		ans=n;
		if(t<(n+m))
		{
			ans+=t;
		}
		else
		{
			ans+=(n+m);
		}
		
		if(m<(t+n))
			{
				ans+=m;
			}
			else
			{
				ans+=(t+n);
			}
	}
	else
	{
		ans=m;
		if(t<(n+m))
		{
			ans+=t;
		}
		else
		{
			ans+=(n+m);
		}
		
		if(n<(t+m))
			{
				ans+=n;
			}
			else
			{
				ans+=(t+m);
			}
	}
	cout<<ans;
	return 0;
}
