#include<stdio.h>

/*

Program for Bubble Sort

*/

int main()
{
	int size;
	
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	
	int arr[size],temp,i,j,k;
	
	printf("Enter element for array : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//bubble sort 
	int count =0,ps=0;
	for(i=0;i<size-1;i++) //n-1 passes according to the algorithm if size is 5 then passes are 0 1 2 3 coz <4
	{
		for (j=0;j<size-1-i;j++) //size-1-i exchange or comparison
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				ps++;
			}
		}
		count++;
		printf("%d pass ",count);
		for(k=0;k<size;k++){
			
			printf("%d ",arr[k]);
		}
		printf("\n");
	}
	printf("%d",ps);
	printf("\nafter the sorting the array is : \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
