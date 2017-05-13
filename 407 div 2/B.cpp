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


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	lli a,r,lim;
	lli n,aa;
	cin >> a >> r >> lim;
	cin >> n;
	sll s;
	lpl(i,0,n-1)
	{
		cin >> aa;
		s.insert(aa);
	}
	if(abs(a)>lim)
	{
		cout << "0" ;
		return 0;
	}
	if(a==0)
	{
		if(s.find(0) != s.end())
			cout << "0";
		else 
			cout << "inf";
		return 0;
	}
	if(r==0)
	{
		if(s.find(0) != s.end())
		{
			if(s.find(a)==s.end() && abs(a)<=lim)
				cout << "1";
			else
				cout << "0";
		}
		else
		{
			cout << "inf";
		}
		return 0;
	}
	else if(r == 1)
	{
		if(abs(a) <= lim)
		{
			if(s.find(a) == s.end())
				cout << "inf";
			else  
				cout << "0";
		}
		else 
			cout << "0";
		return 0;
	}
	else if(r == -1)
	{
		if(abs(a) <= lim)
		{
			if(s.find(a) == s.end() || s.find(-a) == s.end())
				cout << "inf";
			else
				cout << "0";
		}
		else
			cout << "0";
		return 0;			
	}
	lli cnt=0;
	while(abs(a) <= lim)
	{
		if(s.find(a) == s.end())
		{
			cnt++;
		}
		a *= r;
	}
	cout << cnt ;
	return 0;
}
