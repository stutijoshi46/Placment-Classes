#include<stdio.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=n-i;k>=1;k--)
			printf(" ");
		for(j=0;j<2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
