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

vector<bool> prime(100005,true);

void seive(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i])
		{
			for(int j=2;i*j<=n;j++)
			{
				prime[i*j] = false;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	int n;
	cin >> n;
	seive(n+1);
	if(n>=3)
		cout << "2\n";
	else
		cout << "1\n";
	for(int i=2;i<=n+1;i++)
	{
		if(prime[i])
			cout << "1 ";
		else
			cout << "2 ";
	}
}