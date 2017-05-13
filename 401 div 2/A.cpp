#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int ar[6][3] { {0,1,2} , {1,0,2} , {1,2,0} , {2,1,0} , {2,0,1} , {0,2,1} };
	ll n;
	cin >> n;
	int i;
	cin >> i;
	n%=6;
	cout << ar[n][i];
}