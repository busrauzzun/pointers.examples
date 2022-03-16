#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n,*pt;
    printf("How many numbers do you enter\n");
    scanf("%d",&n);

    pt=(int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++){
        scanf("%d",pt+i);
    }

    for(i=0;i<n;i++){
        printf("%d\n",*(pt+i));
    }
    return 0;
}