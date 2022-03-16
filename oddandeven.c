#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,*p1,*p2,i;
    int odd=0,even=0;
    
    printf("Enter number\n");
    scanf("%d",&n);
    
    p1=(int *)malloc(sizeof(int)*n);
    p2=(int *)malloc(sizeof(int)*n);
    
    for(i=0;i<=n;i++){
    	
    	if(i%2==0){
    		*(p1+even)=i;
    		even++;
		}
		else{
			*(p2+odd)=i;
			odd++;
		}
	}
	
	for(i=0;i<even;i++){
		printf("%d\n",*(p1+i));
	}
	printf("\n");
	for(i=0;i<odd;i++){
		printf("%d\n",*(p2+i));
	}
    
    return 0;
}