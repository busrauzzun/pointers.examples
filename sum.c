#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,*pt,i,sum=0;
	
	printf("How many numbers\n");
	scanf("%d",&n);
	
	pt=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",pt+i);
		sum+=*(pt+i);
	}
	printf("total = %d",sum);

	return 0;
}