int main(){
    int*p1,*p2,temp;
    
    p1=(int*)malloc(sizeof(int));
    p2=(int*)malloc(sizeof(int));
	
	printf("Enter first number\n");
    scanf("%d",p1);
    printf("Enter second number\n");
    scanf("%d",p2);


    *p1=temp;
    *p1=*p2;
    *p2=*p1;

    printf("First number %d, second number %d\n",*p1,*p2);
    
    return 0;
}