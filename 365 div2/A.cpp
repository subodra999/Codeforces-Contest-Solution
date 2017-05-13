#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=0,b=0;
	for(int i=0;i<n;i++)
	{
		int m,c;
		cin>>m>>c;
		if(m==c)
			continue;
		m>c?a++:b++;
	}
	if(a==b)
		cout<<"Friendship is magic!^^";
	else if(a>b)
		cout<<"Mishka";
	else
		cout<<"Chris";
	
}
