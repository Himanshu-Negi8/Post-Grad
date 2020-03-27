#include<stdio.h>
#include<limits.h>
void count_frequency(arr,n);
void main()
{
	int n;
	printf("enter the size of the array : ");
	scanf("%d",&n);
	
	int arr[n],i;
	printf("\nenter the elements for array : ")
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	count_frequency(arr,n);
}

void count_frequency(int arr[],int n)
{
	int i,j,count;
	int freq[1000];
	for(i=0;i<n;i++)
	{
		freq[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				++count;
				freq[j]=0;
			}
		}
		if(freq[i]!=0)
		{
			freq[i]=count;
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(freq[i]!=0)
		{
			printf("%d occurs %d times : ",arr[i],freq[i]);
		}
		
	}
}
