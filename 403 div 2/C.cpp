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
vector<bool> vis(200005,true);
vii lev(200005,0);
vii adj[200005],v[200005];
vii ans(200004);
int n,cnt=0,no=0;
void bfs()
{
	vis[0] = false;
	queue<int> q;
	q.push(1);
	vis[1] = false;
	lev[1] = 1;
	while(!q.empty())
	{
		int p = q.front();
		q.pop();
		no = max(no,lev[p]);
		for(auto it = adj[p].begin() ; it!=adj[p].end() ; it++)
		{
			if(vis[*it])
			{
				lev[*it] = lev[p] + 1;
				vis[*it] = false;
				q.push(*it);
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	cin >> n;

	int x,y;
	lpi(i,0,n-2)
	{
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);	
	}
	bfs();
	int l =0;
	//cout << ans << endl;
	lpi(i,1,n)
	{
		v[lev[i]].pb(i);
	}
	for(int i=1 ; i<=no ; i++)
	{
		for(auto it = v[i].begin() ; it!=v[i].end() ; it++)
		{
			ans[*it] = ++cnt;
		}
		if(i%3 == 0)
		{
			l = max(l,cnt);
			cnt = 0;
		}
	}
	l = max(l,cnt);
	cout << l << endl;
	lpi(i,1,n)
		cout << ans[i] << " ";
	return 0;
}
