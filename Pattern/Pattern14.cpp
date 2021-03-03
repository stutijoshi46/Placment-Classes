#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(k=1;k<=n-i;k++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%d",j);
		}
		
		printf("\n");
	}
}
