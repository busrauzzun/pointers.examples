#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n,*pt,i;
	printf("How many number\n");
	scanf("%d",&n);
	
	pt=(int*)calloc(sizeof(int),n);
	srand(time(0));
	for(i=0;i<n;i++){
		*(pt+i)=rand()%100;
		printf("%4d",*(pt+i));
	}
	printf("\n");
	
	int small=*pt;
	for(i=1;i<n;i++){
		if(*(pt+i)<small){
			small=*(pt+i);
		}
	}
	printf("smallest%: %d",small);

	return 0;
}