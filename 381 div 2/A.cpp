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
#define sll set<long long int>
#define mii map<int,int>
#define mll map<long long int,long long int>
#define mis map<int,string>
#define all(n) n.begin(),n.end()
#define present(s,x) (s.find(x) != s.end())
#define cpresent(s,x) (find(all(s),x) != s.end())
#define tr(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define lpi(i,a,b) for(int i=a;i<=b;i++)
#define lpir(i,a,b) for(int i=a;i>=b;i--)
#define lpl(i,a,b) for(lli i=a;i<=b;++i)
#define lplr(i,a,b) for(lli i=a;i>=b;--i)
#define lpv(c,it) for(vii::iterator it=(c).begin();it!=(c).end();it++)

using namespace std;

typedef unsigned long long int ull;
typedef long long int lli;
typedef vector<vector<lli> > mat;

int main()
{
	int n , k ,res=0;
	string s;
	cin >> n >> k >> s;
	int l = s.length();
	int flag=1;
	for(int i = 0; i<l && flag ; )
	{
		if(s[i] == 'G' || s[i] =='T')
		{
			flag=0;
			for(int j = i+k ;j <l ;j+=k)
			{
				if(s[j] == '#')
				{
					res = 0;
					break;	
				}
				if(s[j] == 'T' || s[j] == 'G') 
				res = 1;
				i++;
			}
		}
		i++;
	}
	if(res)
	cout << "YES";
	else
	cout << "NO";
}
