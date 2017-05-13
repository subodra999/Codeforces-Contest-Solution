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
	int n;
	vii a(6,0),b(6,0);
	cin >> n;
	int a1[n],a2[n];
	lpi(i,0,n-1)
		cin >> a1[i];
	lpi(i,0,n-1)
		cin >> a2[i];
	lpi(i,0,n-1)
	{
		a[a1[i]]++;
		b[a2[i]]++;
	}
	int cnt=0;
	lpi(i,1,5)
	{
		int c = a[i]+b[i];
		if(c % 2 == 1)
		{
			cout << -1 ;
			return 0;
		}
		else
		{
			cnt += (a[i]>b[i] ? (a[i] - c/2) : (b[i] - c/2));
		}
	}
	cout << cnt/2 ;
	return 0;
}
