#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=n-i;k>=1;k--)
			printf(" ");
		for(j=1;j<=2*i+1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
			for(k=1;k<=n-i+1;k++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
