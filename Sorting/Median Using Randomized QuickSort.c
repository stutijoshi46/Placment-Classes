#include<stdio.h>
#include<stdlib.h>
void QuickSort(int[],int,int);
void Randomize(int[],int,int);
int Partition(int[],int,int);
void Swap(int*,int*);
void Display(int[],int);
int main()
{
	int t,i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{	
		scanf("%d",&arr[i]);
	}
	QuickSort(arr,0,n-1);
	Display(arr,n);
	return 0;
}

void QuickSort(int arr[],int l,int r)
{
	int x;
	if (l<r)
	{
		Randomize(arr,l,r);
		x=Partition(arr,l,r);
		QuickSort(arr,l,x-1);
		QuickSort(arr,x+1,r);
	}
}
void Randomize(int arr[],int l,int r)
{
	int n=r-l+1;
	int temp=rand()%n;
	Swap(&arr[l+temp],&arr[r]);
}
int Partition(int arr[],int l,int r)
{
	int pivot=arr[r];
	int i=l-1,j;
	for (j=l;j<r;j++)
	{
		if (arr[j]<pivot)
		{
			i++;
			Swap(&arr[i],&arr[j]);
		}
	}
	Swap(&arr[i+1],&arr[r]);
	return i+1;
}
void Swap(int*a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void Display(int arr[],int n)
{
  if(n%2!=0)
  printf("%d",arr[n/2]);
  else
  {
  	int temp=(arr[n/2]+arr[n/2+1])/2;
  	printf("%d",temp);
  }
}
