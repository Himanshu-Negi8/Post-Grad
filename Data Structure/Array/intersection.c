#include<stdio.h>

void intersection(int[],int,int[],int);

void main()
{
	int n1,n2;
	printf("enter the sizes of the array : ");
	scanf("%d%d",&n1,&n2);
	
	int arr1[n1],arr2[n2],i;
	printf("\nenter the elements for array1 : ");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\nenter the elements for array2 : ");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	intersection(arr1,n1,arr2,n2);
}

void intersection(int arr1[],int n1,int arr2[],int n2)
{
	int i=0,j=0;
	
	while(i<n1 && j<n2)
	{
		if(arr1[i]>arr2[j])
		{
			j++;
		}
		if(arr2[j]>arr1[i])
		{
			i++;
		}
		else
		{
			printf("%d\t",arr1[i]);
			i++;j++;
		}
	}
}
