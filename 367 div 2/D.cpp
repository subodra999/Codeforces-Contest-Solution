#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	char s;
	ll n;
	vector<ll> m;
	m.push_back(0);
	while(t--)
	{
		cin>>s>>n;
		if(s=='+')
		m.push_back(n);
		else if(s=='-')
		{
			vector<ll>::iterator it;
			it = find(m.begin(),m.end(),n);
			m.erase(it);
		}
		else if(s=='?')
		{
			vector<ll>::iterator it=m.begin();
			ll ans=0^n;
			for(it;it!=m.end();it++)
			{
				ans=max(ans,(*it)^n);
			}
			cout<<ans<<endl;
		}
	}
}
