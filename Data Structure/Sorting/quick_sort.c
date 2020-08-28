#include<stdio.h>

void quicksort(int p[],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(p[i]<=p[pivot]&&i<last)
            i++;
         while(p[j]>p[pivot])
            j--;
         if(i<j){
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
         }
      }

      temp=p[pivot];
      p[pivot]=p[j];
      p[j]=temp;
      quicksort(p,first,j-1);
      quicksort(p,j+1,last);

   }
}

int main(){
   int i, n, arr[25];

   printf("Total number of elements: ");
   scanf("%d",&n);

   printf("Enter elements: ");
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

   quicksort(arr,0,n-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",arr[i]);

   return 0;
}
