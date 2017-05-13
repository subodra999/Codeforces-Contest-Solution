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
	int i,p,x,y;
	cin >> p >> x >> y;
	int k = x-y;
	if(k > 0)
	{
		k/=50;
		k*=50;
		y = x-k;
	}
	while(y <= x)
	{
		i = (y/50)%475;
			lpi(j,0,24)
			{
				i = (i*96 + 42)%475;
				if (26+i == p)
				{
					cout << "0";
					return 0;	
				}
			}
		y+=50;
	}
	int ans=0;
	while(1)
	{
		ans++;
		for(int cnt=1;cnt<3;cnt++)
		{
			x+=50	;
			i = (x/50)%475;
			lpi(j,0,24)
			{
				i = (i*96 + 42)%475;
				if (26+i == p)
				{		
					cout << ans;
					return 0;
				}
			}
		}
	}	
	cout << ans;
	return 0;
}
/*i := (s div 50) mod 475
repeat 25 times:
    i := (i * 96 + 42) mod 475
    print (26 + i)*/
