
#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>
#define vl vector<ll>
#define mod 1000000007
#define fori(z,n) for(int i=z;i<n;i++)
#define forj(z,n) for(int j=z;j<n;j++)
#define fork(z,n) for(int k=z;k<n;k++)
#define db(x) cout << (#x) << " = " << x << endl;
#define trico() int t;cin>>t ; while(t--)
#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))
#define p_iter vector<pll>::iterator
#define l_iter vector<ll>::iterator
#define forstl(m) for(it=m.begin();it!=m.end();it++)
#define bitcnt(x) __builtin_popcountll(x)
const int nax = 1e6 + 5;
const int lax = 1e5 + 5;
const int pax = 2e5 + 5;
const int inf = 1e9 + 5;
#define sl(n) scanf("%I64d",&n)
#define pl(n) printf("%I64d",n)
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
using namespace std;

ll  arr[1000010],seg_tree[1000010];
ll dp[1000000];
bool prime[1000001];
void SieveOfEratosthenes(int n)
{ 
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}
ll gd(ll n)
{
	if(prime[n])
		return ((n*(n-1)/2)+1);
	ll f=0;
	for(ll i=1;i<=n;i++)
	{
		f+=(i/__gcd(i,n));
	}
	return f;
}
ll f(int n)
{
	if(dp[n]!=-1)
		return dp[n];
	else
		return dp[n]=gd(n);
} 
ll build_tree(ll n , ll low, ll high)
{
 
 
    if(low == high)
    { 
		seg_tree[n]=f(arr[low]); 
    }
    else
    {
        ll mid = (low+high)/2;
     build_tree(2*n+1,low,mid);
        build_tree(2*n+2,mid+1,high);
        seg_tree[n]= (seg_tree[2*n+1]%mod+ seg_tree[2*n+2]%mod)%mod;
    }
 
}
ll update_tree(ll n,ll low,ll high,ll index,ll value)
{
    if(index>high|| index<low) // Completely Outside
        return 0;
 
    if(high==low )
        {
                seg_tree[n]=f(value)%mod; 
        }
 
 
    else
    {
        ll mid =(high+low)/2;
     update_tree(2*n+1,low,mid,index,value);
     update_tree(2*n+2,mid+1,high,index,value);
 
 
        seg_tree[n]=(seg_tree[2*n+1]%mod+ seg_tree[2*n+2]%mod)%mod;
    }
}
ll query(ll n,ll low,ll high,ll start,ll end)
{
 
 
 
     if((start <= low) &&  (high<= end))
        return seg_tree[n];
    else if(end < low )
        return 0;
    else if(start>high )
        return 0;
    else
    {
        ll mid =(low+high)/2;
        ll l=query(2*n+1,low,mid,start,end);
       ll r=query(2*n+2,mid+1,high,start , end );
        return (l+r)%mod;
 
 
    }
}
int main()
{
 //freopen("input.in", "r", stdin);
 ll n,q,index,value,lft,rgt;
 cin>>n;
 fori(0,n)
 	cin>>arr[i];
 fori(0,99999)
 {
 seg_tree[i]=0;
 dp[i]=-1;	
 prime[i]=true;
 }
 SieveOfEratosthenes(1000000);
 build_tree(0,0,n-1);
 char c;
 cin>>q;
 while(q--)
 {
     cin>>c;
     if(c=='U')
     {
         cin>>index>>value;
         index--;
         update_tree(0,0,n-1,index,value);
 
     }
     else if(c=='C')
	    {
             cin>>lft>>rgt;
             lft--;
             rgt--;
             cout<<query(0,0,n-1,lft,rgt)<<"\n";
        }
     }
 
 }
