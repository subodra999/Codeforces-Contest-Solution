#include<bits/stdc++.h>
#define INF 100000.00000
using namespace std;
int main()
{
	double a,b;
	cin>>a>>b;
	int t;
	cin>>t;
	double m,n,s,time,a1,b1;
	double min_time=INF;
	while(t--)
	{
		cin>>m>>n>>s;
		a1=a-m;
		b1=b-n;	
		time=(sqrt((a1*a1)+(b1*b1))/s);
		min_time=min(time,min_time);
	}
	cout.precision(20);
	 cout<<fixed<<min_time;
	
}
