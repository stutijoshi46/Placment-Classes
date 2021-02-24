#include<stdio.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=n-i;k>=1;k--)
			printf(" ");
		for(j=i;j>=1;)
		{
			printf("%d",j--);
		}
		printf("\n");
	}
}
