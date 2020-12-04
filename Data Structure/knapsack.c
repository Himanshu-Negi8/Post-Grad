#include<stdio.h>
#include<limits.h>
#include<math.h>

int knapsack(int value[], int weight[], int si, int capacity, int n){
	
	if(si>=n) return 0;
	
	int include = INT_MIN;
	int exclude = INT_MIN;
	
	if(weight[si]<=capacity){
		include = value[si]+knapsack(value,weight,si+1,capacity-weight[si],n);
	}
	exclude = knapsack(value,weight,si+1,capacity,n);
	
	return include>exclude?include:exclude;
}	

int main(){
	
	
	int value[] = {50,40,70,40};
	int weight[]= {5, 4, 6, 3};
	int capacity = 9;

	int n = 4;
	int ans = knapsack(value,weight,0,capacity,n);
	printf("%d ",ans);
	
	return 0;
}
