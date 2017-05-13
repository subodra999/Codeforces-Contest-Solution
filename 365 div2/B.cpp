#include<bits/stdc++.h>
#define ll long int
using namespace std;
int main()
{
	ll n;
	cin>>n;
	vector<ll> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	ll k;
	cin>>k;
	//ll ar[k][2];
	for(int i=0;i<k;i++)
	{
		//cin>>ar[i][0];
		//cin>>ar[i][1];
		ll a,b;
		cin>>a>>b;
		set<ll> s;
		for(int j=a-1;j<=b-1;j++)
		{
			s.insert(v[j]);
		}
		ll ans=0;
		for(set<ll>::iterator it=s.begin();it!=s.end();it++)
		{
			//cout<<*it<<"*";
			//cout<<count(v.begin()+(a-1),v.begin()+(b-,*it)<<"&";
			if(count(v.begin()+(a-1),v.begin()+b,*it)%2==0)
				{
					ans^=*it;
					//cout<<*it<<" ";
					
				}
		}
		cout<<ans<<endl;
	}
	
}
