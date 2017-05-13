#include<bits/stdc++.h>
#define ll long long int
using namespace std;

/*int search(ll arr[],ll target,int numElems)
{
	int mid=0,low = 0, high = numElems;
	while (low != high) {
    mid = (low + high) / 2; // Or a fancy way to avoid int overflow
    if (arr[mid] <= target) {
        low = mid + 1;
    }
    else {
        high = mid;
    }
}
if(arr[mid]!=target)
	return -1;

return mid;
}*/
int main()
{
	int t;
	cin>>t;
	ll ar[t];
	for(int i=0;i<t;i++)
		cin>>ar[i];
	sort(ar,ar+t);
	int q;
	ll a;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>a;
		int cnt=0;
		for(int i=0;i<t;i++)
		{
			if(ar[i]<=a)
			cnt++;
			else
			break;
		}
		cout<<cnt<<endl;
	//	cout<<search(ar,a,t)+1<<endl;
	}
}

