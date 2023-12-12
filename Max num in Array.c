// Maximum number in Array
#include<stdio.h>
#define Max 50
int main(){
	int num[Max],n,i,max=0;
	scanf("%d",&n);
	for(i = 0 ; i< n; i++){
		scanf("%d",&num[i]);
		if(num[i]>max)
		max = num[i];
	}
	printf("Maximum number :: %d",max);
}
