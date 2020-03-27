#include<stdio.h>

void isAp(int[],int,int);

void main()
{
	int n;
	printf("enter the size of the array : ");
	scanf("%d",&n);
	
	int arr[n],i;
	printf("\nenter the elements for array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int diff;
	diff =  arr[1]-arr[0];
	
	isAp(arr,n,diff);
}

void isAp(int arr[],int n,int diff)
{
	
	int i,flag=0,index,a;
	
	for(i=2;i<n;i++)
	{
		if((arr[i]-arr[i-1])!=diff)
		{
			printf("Not in AP.");
			flag=1;
			index =i;
			int d=index;
			++d;
			while(a+d*diff<arr[index])
			{
				printf("%d\n",a+d*diff);
				d++;
			}
			break;
		}
	}
	if(flag!=1)
	{
		printf("It is in Ap");
	}
	
	
}
