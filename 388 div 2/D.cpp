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
#define all(n) n.begin(),n.end()
#define present(s,x) (s.find(x) != s.end())
#define cpresent(s,x) (find(all(s),x) != s.end())
#define tr(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define lpi(i,a,b) for(int i=a;i<=b;i++)
#define lpir(i,a,b) for(int i=a;i>=b;i--)
#define lpl(i,a,b) for(lli i=a;i<=b;++i)
#define lplr(i,a,b) for(lli i=a;i>=b;--i)
#define lpv(c,it) for(vii::iterator it=(c).begin();it!=(c).end();it++)

using namespace std;

typedef unsigned long long int ull;
typedef long long int lli;
typedef vector<vector<lli> > mat;

void swap(lli *a,lli *b) { lli t=*a;  *b=*a, *a=t; }
bool isOdd(lli n){ if(n&1) return 1; return 0; }
lli noSetBit(lli n){ lli cnt=0; while(n){ n&=(n-1); cnt++;} return cnt; }

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 

	lli n,i_per,bid;
	cin >> n;

	vll maxbid(n+1,0);
	vll s[n+1];

	lpl(i,1,n)
	{
		cin >> i_per >> bid;
		if(bid > maxbid[i_per])
			maxbid[i_per] = bid;
		s[i_per].push_back(bid);
	}

//	mll m;
//	lpl(i,1,n)
//	{
//		if(s[i].begin() != s[i].end())
//			m[i] = *s[i].rbegin();
//	}
	lli q,no,p;
	cin >> q;
	while(q--)
	{
		mll m1=m;
		mll m2;
		cin >> no;
		while(no--)
		{
			cin >> p;
			m1.erase(p);
		}
		if(m1.size()==0)
		{
			cout<<0<<" "<<0<<endl;
		}
		else if(m1.size()==1)
		{
			cout << (*m1.begin()).first << " " << *(s[(*m1.begin()).first]).begin() << endl;
		}
		else
		{
			tr(m1,it)
			{
				m2[(*it).second] = (*it).first;
			}
			mll::iterator itt = m2.end();
			--itt;
			mll::iterator ittt = itt;
			--ittt;
			lli itr = *upper_bound(s[(*itt).second].begin(), s[(*itt).second].end() ,(*ittt).first);
			cout << (*itt).second <<" " << itr << endl;

		}
	}
	return 0;
}
