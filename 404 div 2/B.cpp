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
#define msi map<string,int>
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
	int n,m;
	cin >> n;
	vector<pii> c(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> c[i].ff >> c[i].ss;
	}
	cin >> m;
	vector<pii> p(m);
	for (int i = 0; i < m; ++i)
	{
		cin >> p[i].ff >> p[i].ss;
	}
	int c_r = INT_MAX,c_l = INT_MIN,p_r = INT_MAX,p_l = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		c_r = min(c_r , c[i].ss);
		c_l = max(c_l , c[i].ff);
	}
	for (int i = 0; i < m; ++i)
	{
		p_r = min(p_r , p[i].ss);
		p_l = max(p_l , p[i].ff);
	}
	int ans = max(p_l-c_r,c_l-p_r);
	cout << max(0,ans);
	return 0;
}
