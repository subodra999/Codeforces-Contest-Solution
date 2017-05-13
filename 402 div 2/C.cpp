#include<bits/stdc++.h>

#define mod 1000000007
#define nax 1000005
#define inf 100000000000000000LL
#define pb push_back
#define mp make_pair
#define in insert
#define ff first
#define ss second
#define pll pair<long long int,long long int>
#define pii pair<int,int>
#define vll vector<long long int>
#define vii vector<int>
#define sii set<int>
#define vb vector<bool>
#define sll set<long long int>
#define mii map<int,int>
#define mll map<long long int,long long int>
#define mis map<int,string>
#define all(n) n.begin(),n.end()
#define tr(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define lpi(i,a,b) for(int i=a;i<=b;i++)
#define lpir(i,a,b) for(int i=a;i>=b;i--)
#define lpl(i,a,b) for(lli i=a;i<=b;++i)
#define lplr(i,a,b) for(lli i=a;i>=b;--i)
#define lpv(c,it) for(vii::iterator it=(c).begin();it!=(c).end();it++)

using namespace std;

typedef long long int lli;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	int n,k;
	cin >> n >> k;
	int a[n],b[n];
	lpi(i,0,n-1)
		cin >> a[i];
	lpi(i,0,n-1)
		cin >> b[i];
	bool check[n];
	int ans1=0,ans2=0,cnt=0;
	lpi(i,0,n-1)
	{
		if(a[i] < b[i])
		{
			check[i] = true;
			ans1 += a[i];
			cnt++;
		}
		else
		{
			check[i] = false;
			ans2 += b[i];
		}
	}
	if(cnt >= k)
	{
		cout << (ans1+ans2);
	}
	else
	{
		vector<pair<int,int> > v;
		lpi(i,0,n-1)
		{
			v.pb(make_pair(a[i]-b[i],i));
		}
		sort(all(v));
		{
			for(vector<pair<int,int> >::iterator it=v.begin() ; it!=v.end() ; it++)
			{
				if(check[(*it).ss] == true)
					continue;
				else
				{
					ans1+=(a[(*it).ss]);
					ans2-=(b[(*it).ss]);
					cnt++;
				}
				if(cnt == k)
					break;
			}
		}
		cout << (ans1+ans2);
	}
	return 0;
}
