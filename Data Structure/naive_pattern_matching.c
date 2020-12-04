#include<stdio.h>
#include<string.h>


int main(){
	int n,m,s,count=0;
	
	char t[200],p[200];
	
	printf("enter the string : ");
	gets(t);
	
	printf("enter the pattern : ");
	gets(p);
	
	n = strlen(t);
	m = strlen(p);
	
	for(s=0;s<=(n-m);s++){
		int i;
		for(i=0;i<m;i++){
			if(t[s+i]!=p[i]){
				break;
			}
		}
		if(i==m) printf("pattern found at : %d",i);
	}
	
	
	return 0;
}
