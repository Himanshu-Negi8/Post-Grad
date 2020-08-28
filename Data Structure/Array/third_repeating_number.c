#include<stdio.h>


void calculate_third_repeat(int[],int);

void main()
{
	
	int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int arr[n],i;
	printf("\nEnter the element for array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	calculate_third_repeat(arr,n);
	
	
}
void calculate_third_repeat(int arr[],int n)
{
	int i,j,count=0,flag=0;
	for(i=0;i<n;i++)
	{
		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				++count;
				arr[j]=-1;
				break;
			}
			
			if(count==3)
			{
				flag=1;
					printf("\n answer %d",arr[j]);
				break;
			}
			
		}
		if(flag==1)
			{
			
				break;
			}
		
	}

}
