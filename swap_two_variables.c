#include<stdio.h>
main(){
	
	int var1,var2,tem;
	
	printf("Enter first variable number:- ");
	scanf("%d",&var1);
	printf("Enter second variable number:- ");
	scanf("%d",&var2);
	tem = var1;
	var1 = var2;
	var2 = tem;
	printf("Enter first variable number:- %d\n",var1);
	printf("Enter second variable number:- %d",var2);
}