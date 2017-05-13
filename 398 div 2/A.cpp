#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int ar[n];
	bool vis[n+1];
	memset(vis,false,sizeof(vis));
	for(int i=0;i<n;i++)
	{
		cin >> ar[i];
	}
	int j = 0;
	for(int i=n;i>=1;--i)
	{
		if(vis[i] == false)
		{
			while(ar[j] != i){
			vis[ar[j]] = true;
			j++;
			cout << endl;	
			}
			cout << i << " ";
		
		}
		else
		{
			cout << i << " ";
		}
		
	}
	
}
