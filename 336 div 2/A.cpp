#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string k1="I hate ";
	string k2="I love ";
	string a="that ";
	cout<<k1;
	for(int i=2;i<=n;i++)
	{
		cout<<a;
		if(i%2==0)
			cout<<k2;
		else
			cout<<k1;
	}
	cout<<"it";
}
