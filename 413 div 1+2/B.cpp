#include<iostream>
#include<cmath>
#include<vector>
#include<queue>
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
	lli pr;
	int aa,bb;
};
bool cmp(node a,node b)
{
	if(a.pr<b.pr)
		return true;
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	int n;
	cin >> n;
	vector<lli> p(n);
	vector<int> a(n),b(n);
	lpi(i,0,n-1)
		cin >> p[i];
	lpi(i,0,n-1)
		cin >> a[i];
	lpi(i,0,n-1)
		cin >> b[i];
	vector<node> v;
	lpi(i,0,n-1)
	{
		node q;
		q.pr = p[i];
		q.aa = a[i];
		q.bb = b[i];
		v.pb(q);
	}
	sort(all(v),cmp);
	queue<lli> q1,q2,q3;
	for(vector<node>::iterator it=v.begin() ; it!=v.end() ; it++)
	{
		if((*it).aa == 1)
			q1.push((*it).pr);
		else if((*it).aa == 2)
			q2.push((*it).pr);
		else if((*it).aa == 3)
			q3.push((*it).pr);
		
		if((*it).bb == 1)
			q1.push((*it).pr);
		if((*it).bb == 2)
			q2.push((*it).pr);
		if((*it).bb == 3)
			q3.push((*it).pr);
	}
	vector<bool> take(1000000001,true);
	int m;
	cin >> m;
	int f;
	while(m--)
	{
		cin >> f;
		int flag = 1;
		if(f == 1)
		{	
		while(q1.size() != 0)
		{
			if(take[q1.front()])
			{
				take[q1.front()] = false;
				cout << q1.front() << " ";
				flag = 0;
				q1.pop();
				break;
			}
			else 
				q1.pop();
		}
		if(flag)
			cout << "-1 ";
		}
		
		else if(f == 2)
		{	
		while(q2.size() != 0)
		{
			if(take[q2.front()])
			{
				take[q2.front()] = false;
				cout << q2.front() << " ";
				flag = 0;
				q2.pop();
				break;
			}
			else 
				q2.pop();
		}
		if(flag)
			cout << "-1 ";
		}
		
		else if(f == 3)
		{	
		while(q3.size() != 0)
		{
			if(take[q3.front()])
			{
				take[q3.front()] = false;
				cout << q3.front() << " ";
				q3.pop();
				flag = 0;
				break;
			}
			else
				q3.pop();
		}
		if(flag)
			cout << "-1 ";
		}
	}
	
	//cout << "hello";
	return 0;
}
