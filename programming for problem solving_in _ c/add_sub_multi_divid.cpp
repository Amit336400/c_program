#include<stdio.h>
int main(){
	int a,b;
	printf("Enter 1st number :- ");
	scanf("%d",&a);
	printf("Enter 2nd number :- ");                             
	
	scanf("%d",&b);
	int sum=a+b;
	printf("The addition is %d\n",sum);
	int sub=a-b;
	printf("The subtract is %d\n",sub);
	
	int mul=a*b;
	printf("The multiply is %d\n",mul);
	int div=a/b;
	printf("The divide is %d\n",div);
	
	
	
	return 0;
}
