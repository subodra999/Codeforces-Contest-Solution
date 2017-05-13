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
	int n,p,b;
	cin >> n >> p >> b;
	//int init = p/n;
	//p%=n;
	vii ar(n+1,1);
	//cout <<ar[b];
	p-=n;
	int i_l=b,i,j,j_l=b,f;
	while(p)
	{
		ar[b]+=1;
		p--;
		if(i_l!=n)
		i_l+=1;
		if(j_l!=1)
		j_l-=1;
		i=i_l;
		j=j_l;
		f=1;
		while(i_l<=n && p && i>b)
		{
			ar[i]+=1;
			i--;
			p--;
			f=0;
		}
		while(j_l>=1 && p && j<b)
		{
			ar[j]+=1;
			j++;
			p--;
			f=0;
		}
		
	}
	cout << ar[b];
	return 0;
}
