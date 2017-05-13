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
#define gst(n) scanf("%s",n)
#define gc(n) cin >> n
#define oi(n) printf("%d",n)

#define ost(n) printf("%s",n)
#define oc(n) cout << n
#define os cout<<" "
#define on cout<<"\n"
#define o2(a,b) cout<<a<<" "<<b
#define all(n) n.begin(),n.end()
#define present(s,x) (s.find(x) != s.end())
#define cpresent(s,x) (find(all(s),x) != s.end())
#define tr(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define lpi(i,a,b) for(int i=a;i<=b;i++)
#define lpr(i,a,b) for(int i=a;i>=b;i--)
#define lpv(c,it) for(vii::iterator it=(c).begin();it!=(c).end();it++)

using namespace std;

typedef unsigned long long int ull;
typedef long long int lli;
typedef vector<vector<lli> > mat;

void swap(int *a,int *b) { int t=*a;  *b=*a, *a=t; }
double power(lli x,lli n) { double B=log(x); double C=n*B; return exp(C); }
bool isOdd(lli n){ if(n&1) return 1; return 0; }
lli noSetBit(lli n){ lli cnt=0; while(n){ n&=(n-1); cnt++;} return cnt; }
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	lli ar[n];
	set<lli> s;
	lpi(i,0,n-1)
	{
		cin>>ar[i];
		s.in(ar[i]);
	}
	if(s.size()==1||s.size()==2)
	{
		cout<<"YES";
	}
	else if(s.size()>3)
	{
		cout<<"NO";
	}
	else if(s.size()==3)
	{
		int flag=0;
		for(set<lli>::iterator it=s.begin();it!=s.end();++it)
		{
			set<lli> s2;
			for(set<lli>::iterator it1=s.begin();it1!=s.end();++it1)
			{
				if(*it!=*it1)
					s2.in(abs(*it-*it1));
			}
			if(s2.size()==1)
				flag=1;
		}
		if(flag)
			cout<<"YES";
		else
			cout<<"NO";
	}
	return 0;
}

