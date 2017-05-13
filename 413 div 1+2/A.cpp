#include<iostream>
#include<cmath>
#include<vector>
#include<set>
#include<string>
#include<map>
#include<algorithm>

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
	int n,t,k,d,done=0,ans=0;
	cin >> n >> t >> k >> d;
	int f = ceil(n/(1.0*k));
	lpi(i,1,f*t)
	{
		if(i%t == 0)
			done++;
		if(done == f)
			break;
		if(i>d && (i-d)%t==0)
		{
			done++;
			ans=1;
		}
		if(done == f)
			break;
	}
	if(ans)
		cout << "YES";
	else
		cout << "NO";
	/*
	int done = ceil(d/(1.0*t));
	if(f > 1)
	{
		if(f-done > 1)
			cout << "YES";
		else if(d < t)
			cout << "YES";
		else
			cout << "NO";
	}
	else
		cout << "NO";
*/	return 0;
}
