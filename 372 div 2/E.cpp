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
#define gi(n) scanf("%d",&n)
#define gll(n) scanf("%lld",&n)
#define gst(n) scanf("%s",n)
#define gc(n) cin >> n
#define oi(n) printf("%d",n)
#define oll(n) printf("%lld",n)
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
bool isOdd(lli n){ if(n&1) return 1; return 0; }
lli tree[1000000];
lli dp[1000000];
lli gd(int n)
{
	lli f=0;
	lpi(i,1,n)
	{
		f+=(i/__gcd(i,n));
	}
	return f;
}
lli f(int n)
{
	if(dp[n]!=-1)
		return dp[n];
	else
		return dp[n]=gd(n);
}
void build(int ar[],int start,int end,int node)
{
	if(start==end)
		tree[node]=f(ar[start]);
	else
	{
		int mid=(start+end)/2;
		build(ar,start,mid,2*node);
		build(ar,mid+1,end,2*node+1);
		tree[node]=tree[2*node]+tree[2*node+1];
	}
}
lli query(int start,int end,int l,int r,int node)
{
	if(start>r || end<l)			 //complete outside
		return 0;
	else if(start>=l && end<=r)       //complete inside
	{
		return tree[node];
	}
	else
	{
		int mid=(start+end)/2;
		lli a=query(start,mid,l,r,2*node);
		lli b=query(mid+1,end,l,r,2*node+1);
		return a+b;
	}
}
void update(int ar[],int start,int end,int idx,int value,int node)
{
	if(start>idx || end<idx)
		return;
	else if(start==end)
	{
		ar[idx]=value;
		tree[node]=f(value);
	}
	else
	{
		int mid=(start+end)/2;
		update(ar,start,mid,idx,value,2*node);
		update(ar,mid+1,end,idx,value,2*node+1);
		tree[node]=tree[2*node]+tree[2*node+1];
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	lpi(i,0,99999)
		dp[i]=-1;
	int n;
	cin>>n;
	int ar[n+1];
	lpi(i,1,n)
		cin>>ar[i];
	build(ar,1,n,1);
	int q;
	while(q--)
	{
		char c;
		int l,r;
		cin>>c>>l>>r;
		if(c=='C')
			cout<<query(1,n-1,l,r,1)<<endl;
		else
			update(ar,1,n,l,r,1);
	}
	return 0;
}

