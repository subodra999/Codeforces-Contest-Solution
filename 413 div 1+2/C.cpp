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

struct node{
	int beauty,cost;
};

bool cmp(node a,node b)
{
	if(a.cost < b.cost)
		return true;
	else if(a.cost == b.cost)
	{
		if(a.beauty < b.beauty)
			return true;
	}
	return false;
}

int search(vector<node> &v,int i,int rem)
{
	int ans = -1;
	int l = i+1;
	int r = v.size()-1;
	while(l <= r)
	{
		int mid = (l+r)/2;
		if(v[mid].cost <= rem)
		{
			if(ans == -1)
				ans = mid;
			else if(v[ans].beauty < v[mid].beauty)
				ans = mid;

			l = mid+1;
		}
		else
		{
			r = mid-1;
		}
	}
	return ans;
}

int main()
{
	int n,coin,diam,cost,beauty;
	char type;
	cin >> n >> coin >> diam;
	vector<node> C,D;
	lpi(i,1,n)
	{
		node a;
		cin >> a.beauty >> a.cost >> type;
		if(type == 'C')
			C.pb(a);
		else
			D.pb(a);
	}
	sort(all(C),cmp);
	sort(all(D),cmp);
	int lc = C.size();
	int ld = D.size();
	int b1=0,b2=0,ans=0;
	
	//case 1: one coin , one diam 
	lpi(i,0,lc-1)
	{
		if(C[i].cost <= coin)
			b1 = max(b1,C[i].beauty);
		else if(C[i].cost > coin)
			break;
	}
	lpi(i,0,ld-1)
	{
		if(D[i].cost <= diam)
			b2 = max(b2,D[i].beauty);
		else if(D[i].cost > diam)
			break;
	}
	if(b1 != 0 && b2 != 0)
		ans = max(ans,b1+b2);

	//case 2 : both coin
	lpi(i,0,lc-1)
	{
		if(C[i].cost <= coin)
		{
			b1 = C[i].beauty;
			int ser = search(C,i,coin - C[i].cost);      //binary search	
			if(ser != -1)
			{
				ans = max(ans , b1+C[ser].beauty);
			}
		}
	}

	//case 3 : both diam
	lpi(i,0,ld-1)
	{
		if(D[i].cost <= diam)
		{
			b1 = D[i].beauty;
			int ser = search(D,i,diam - D[i].cost);      //binary search
			if(ser != -1)
			{
				ans = max(ans , b1+D[ser].beauty);
			}
		}
	}

	cout << ans;
	return 0;
}
