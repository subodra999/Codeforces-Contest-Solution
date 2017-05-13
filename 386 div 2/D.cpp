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

void swap(lli *a,lli *b) { lli t=*a;  *b=*a, *a=t; }
bool isOdd(lli n){ if(n&1) return 1; return 0; }
lli noSetBit(lli n){ lli cnt=0; while(n){ n&=(n-1); cnt++;} return cnt; }

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	int n,k,g,b;
	cin >> n >> k >> g >> b;
	if(g==0)
	{
		if(b>k)
		{
			cout << "NO";
		}
		else
		{
			lpi(i,1,n)
				cout<<"B";
		}
	}
	else if(b==0)
	{
		if(g>k)
		{
			cout << "NO";
		}
		else
		{
			lpi(i,1,n)
				cout<<"G";
		}
	}
	else if(max(g,b)/min(g,b) >k )
	{
		cout << "NO";
	}
	else
	{
		int g_grp = floor(g/k);
		int b_grp = floor(b/k);
		string s="";
		if(g_grp == b_grp)
		{
			int f=1;
			for(int i=0;i<n;)
			{
				int j=k;
				while(f&&j--&&i<n)
				{
					s = s+"G";
					i++;
				}
				while(!f&&j--&&i<n)
				{
					s=s+"B";
					i++;
				}
				f=1-f;
			}
			cout<<s;
		}
		else if(g_grp < b_grp)
		{
			int k1 = k;
			while(b_grp!=(g_grp+1) || b_grp!=g_grp || b_grp!=(g_grp-1))
			{
				b_grp = floor(b/--k1);
				if (k1==0)
				{
					cout<<"NO";
					return 0;
				}
			}
		}
		else if(b_grp < g_grp)
		{
			
		}
	}
	return 0;
}
