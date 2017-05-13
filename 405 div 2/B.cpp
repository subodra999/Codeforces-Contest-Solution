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
vector<vii> adj(150002);
vb vis(150002,true);
int vertices,edges;
void dfs(int n)
{
	edges = 0;
	vertices = 0;
	stack<int> s;
	s.push(n);
	vis[n] = false;
	while(!s.empty())
	{
		int p = s.top();
		edges+=adj[p].size();
		s.pop();
		vertices++;
		for(vii::iterator it = adj[p].begin() ; it!=adj[p].end() ; it++)
		{
			if(vis[*it])
			{
				s.push(*it);
				vis[*it] = false;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	int n,m,x,y;
	cin >> n >> m;
	while(m--)
	{
		cin >> x >> y;
		adj[x-1].pb(y-1);
		adj[y-1].pb(x-1);
	}
	for(int i=0 ; i<n ; i++)
	{
		if(vis[i])
		{
			dfs(i);
			//cout << i << " " << edges << " " << vertices << endl;
			if(edges == (vertices*(vertices-1)))
				continue;
			else
			{
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
	return 0;
}
