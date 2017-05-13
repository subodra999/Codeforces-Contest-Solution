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
	lli n;
	lli k;
	cin >> n >> k;
	vll ar(n);
	lpl(i,0,n-1)
	{
		cin >> ar[i];
	}
	sort(all(ar));
	lli j , cnt;
	for(lli i=0;i<n; )
	{
		j = i+1;
		while(j<n)
		{
			if(ar[j] == ar[i])
			{
				j++;	
			}
			else
			{
				break;
			}
		}
		cnt = j-i;
		if(cnt*n < k)
		{
			k -= (cnt*n);
			i = j;
		}
		else
		{
			cout << ar[i] << " " << ar[(k-1)/cnt];
			return 0;
		}
	}
	return 0;
}
/* 100000 800000000
911834 264132 264132 264132 -648166 -648166 849233 377744 377744 377744 377744 377744 -660271 -660271 -660271 167212 167212 68756 68756 68756 68756 68756 641335 -13826 766805 41558 41558 41558 41558 438882 438882 438882 438882 363319 869620 -716437 -700826 -556942 -556942 -521324 -521324 554419 554419 554419 554419 376224 376224 -376111 -376111 -376111 -785403 580476 580476 580476 580476 580476 -263535 -263535 -263535 -456169 -456169 -456169 846455 846455 846455 846455 846455 22098 22098 ... */
