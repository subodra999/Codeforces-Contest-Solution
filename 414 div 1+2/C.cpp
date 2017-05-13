#include<iostream>
#include<cmath>
#include<vector>
#include<set>
#include<string>
#include<map>
#include<stack>
#include<queue>
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


int main()
{
	//ios_base::sync_with_stdio(false); cin.tie(0); 
	//cout << "hello";
	
	string o,i;
	cin >> o >> i;
	int l = o.length();
	sort(all(o));
	sort(all(i));
	int ii=0,jj=l-1;
	while(ii<jj)
	{
		char temp = i[ii];
		i[ii] = i[jj];
		i[jj] = temp;
		ii++;
		jj--;
	}
	//o -> small     i->large
	int k=0;
	int s=0;
	int j,sub=0;
	char ans[l];
	for(j=0;j<l;j++)
	{
		if(i[k]<o[s])
			break;
		if(j&1)
		{
			ans[sub++] = i[k++];
		}	
		else
		{
			ans[sub++] = o[s++];
		}
	}
	sub = l-1;
	int igor,oger;
	if(l&1)
	{
		igor = l/2-1;
		oger = (l+1)/2-1;
	}	
	else
	{
		igor = l/2-1;
		oger = l/2-1;
	}
	//cout << oger << " " << igor << endl;
	for(int p=l-1;p>=j;--p)
	{
		if(p&1)
		{
			ans[sub--] = i[igor--];
		}	
		else
		{
			ans[sub--] = o[oger--];
		}
	}
	for(j=0;j<l;j++)
		cout << ans[j];
	//cout << o << " " << i << endl;
	return 0;
}
