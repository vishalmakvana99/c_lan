#include<stdio.h>
main(){
	
	int a,b;
	
	printf("Enter first variable number:- ");
	scanf("%d",&a);
	printf("Enter first variable number:- ");
	scanf("%d",&b);
	a=a+b;    
	b=a-b;    
	a=a-b;
	printf("Enter first variable number:- %d\n",a);
	printf("Enter second variable number:- %d",b);    
}