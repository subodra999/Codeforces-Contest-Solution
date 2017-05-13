/**
		@@  By - subodra_nits
*/ 
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
#define lpr(i,a,b) for(int i=a;i>=b;i--)
#define lpv(c,it) for(vii::iterator it=(c).begin();it!=(c).end();it++)

using namespace std;

typedef unsigned long long int ull;
typedef long long int lli;
typedef vector<vector<lli> > mat;

void swap(int *a,int *b) { int t=*a;  *b=*a, *a=t; }
double power(lli x,lli n) { double B=log(x); double C=n*B; return exp(C); }
bool isOdd(lli n){ if(n&1) return 1; return 0; }
lli noSetBit(lli n){ lli cnt=0; while(n){ n&=(n-1); cnt++;} return cnt; }
int main()
{
	string s;
	cin>>s;
	int l=s.length();
	if(l<26)
		cout<<"-1";
	else
	{
		int ar[26];
		int flag=0;
		lpi(i,0,25)
		ar[i]=1;
		int j=0,i=0;
		for(i=0;i<l;i++)
		{
			if(s[i]=='?')
				i;
			else if(ar[s[i]-'A']==1)
				ar[s[i]-'A']=0;
			else if(ar[s[i]-'A']==0)
			{
					for(j;j<i;j++)
					{
						if(ar[s[j]-'A']==0)
							ar[s[j]-'A']=1;
						if(s[j]==s[i])
						{
							ar[s[j]-'A']=0;
							j++;
							break;
						}
					}
				
			}
			if((i-j)==25)
			{
				flag=1;
				break;
			}
		}
		if(!flag)
		{
			cout<<"-1";
		}
		else
		{
			int n=0;
			for(int k=0;k<l;k++)
			{
				if(j<=k && k<=i)
				{
					if(s[k]=='?')
					{
						for(n;n<26;n++)
						{
							if(ar[n]==1)
							{
								printf("%c",('A'+n));
								n++;
								break;
							}
						}
					}
					else
						cout<<s[k];
				}
				else if(s[k]=='?')
					cout<<'A';
				else
					cout<<s[k];
			}
		}
	}
	return 0;
}

