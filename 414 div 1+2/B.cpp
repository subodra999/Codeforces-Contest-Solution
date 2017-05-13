#include <stdio.h>
#include <math.h>

int main(void) {
	// your code goes here
	int n,h;
	scanf("%d %d",&n,&h);
	for(int i=n-1;i>=1;i--)
	{
		float ans = sqrt((n-i)/(1.0*n))*h;
		printf("%.8f ",ans);
	}
	return 0;
}
