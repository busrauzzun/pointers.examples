#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i,n,*pt;
    printf("How many numbers\n");
    scanf("%d",&n);

    pt=(int*)calloc(n,sizeof(int));
	srand(time(0));
    for(i=0;i<n;i++){
        *(pt+i)=rand()%50;
        printf("%d\n",*(pt+i));
     
    }
    for(i=0;i<n;i++){
    	printf("%d\n",(*(pt+i))*(*(pt+i)));
	}
    
    return 0;
}   