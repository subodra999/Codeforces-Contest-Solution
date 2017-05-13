#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int search(ll arr[],ll target,int numElems)
{
	int mid=0,low = 0, high = numElems;
	while (low != high) {
    mid = (low + high) / 2; 
    if (arr[mid] <= target) {
        low = mid + 1;
    }
    else {
        high = mid;
    }
}
if(arr[mid]>target&&mid==0)
	return 0;
if(arr[mid]==target)
	return ++mid;
if(arr[mid]<target)
	return ++mid;
return mid;
}
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
		//int ans = upper_bound(ar, ar+t, a) - ar;
		//cout<<ans<<endl;
		cout<<search(ar,a,t)<<endl;
	}
}
