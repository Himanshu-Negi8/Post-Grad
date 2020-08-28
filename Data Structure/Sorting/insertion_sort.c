#include<stdio.h>

/*

Program for insertion sort 

*/

void insertion_sort(int p[],int n)
{
	int i,j,temp;
	
	for(i=1;i<n;i++)
	{
		temp=p[i];
		j=i-1;
		while(j>=0 && temp<p[j])
		{
			p[j+1]=p[j];
			j--;
	
		}
		p[j+1]=temp;
		
	}
}

int main()
{
	printf("Sheetal Kanyal\nRoll No-1101854\n");
	int n,i;
	printf("enter the size of the array : ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter element for array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	
	printf("\nafter the sorting the array is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
