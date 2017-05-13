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
#define lpl(i,a,b) for(ll i=a;i<=b;++i)
#define lplr(i,a,b) for(ll i=a;i>=b;--i)
#define lpv(c,it) for(vii::iterator it=(c).begin();it!=(c).end();it++)

using namespace std;

typedef long long int ll;

string s1,s2;
ll m,n;
ll a[200005];
bool check(ll x)
{
	vector<bool> p(n,true);
	lpl(i,0,x)
		p[a[i]] = false;
  	ll j = 0; 
   	for(ll i=0; i<n && j<m ; i++)
   	{
   		if(p[i])
   		{
   			if(s1[i] == s2[j])
			   j++;	  
		}
	}
 	return (j==m);
}

  
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	cin >> s1 >> s2;
	n=s1.length();
	m=s2.length();
	
	lpl(i,0,n-1)
	{
		cin >> a[i];
		a[i]--;
	}
	
	ll low = 0;
	ll high = n-1;
	ll mid;
	while(low < high)
	{
		mid = (low + high)/2;
		if(check(mid))
			low = mid+1;
		else
			high = mid;
	//	cout << low << " " << high << endl;
	}
	
	cout <<low;
}
	
	
	
	
	
	
