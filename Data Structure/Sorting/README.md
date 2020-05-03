# Program for BUBBLE SORT

```c
#include<stdio.h>

/*
Program for Bubble Sort
*/

int main()
{
	int size;
	
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	
	int arr[size],temp,i,j;
	
	printf("Enter element for array : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//bubble sort 
	
	for(i=0;i<size-1;i++) //n-1 passes according to the algorithm if size is 5 then passes are 0 1 2 3 coz <4
	{
		for (j=0;j<size-1-i;j++) //size-1-i exchange or comparison
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	printf("\nafter the sorting the array is : \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
```

---

# Program for Selection Sort

```c
#include<stdio.h>

/*
Program for selection sort 
*/

void selection_sort(int arr[],int n)
{
	int i,j,min,pos;
	
	for(i=0;i<n-1;i++)
	{
		min=arr[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
				pos=j;
			}
		}
		if(pos!=i)
		{
			arr[pos]=arr[i];
			arr[i]=min;
		}
	}
}

int main()
{
	int size,i;
	printf("enter the size of the array : ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter element for array : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,size);
	
	printf("\nafter the sorting the array is : \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
```

---
