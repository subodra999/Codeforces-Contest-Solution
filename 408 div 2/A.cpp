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
	int n,m,k;
	cin >> n >> m >> k;
	int ar[n+1];
	lpi(i,1,n)
	{
		cin >> ar[i];
		if(ar[i] == 0)
			ar[i] = 101; 
	}
	int ans=1000;
	lpi(i,m+1,n)
	{
		if(ar[i]<=k)
		{
		//	cout << i << endl;
			ans = min(ans,abs(m-i));
			break;
		}
	}
	lpir(i,m-1,1)
	{
		if(ar[i]<=k)
		{
			//cout << i << endl;
			ans = min(ans,abs(m-i));
			break;
		}	
	}
	if(ans == 1000)
		cout << "";
	else
		cout << (ans*10) ; 
	return 0;
}
