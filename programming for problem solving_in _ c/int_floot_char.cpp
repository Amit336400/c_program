#include<stdio.h>
int main(){
	
	int i;
	float f;
	char c;
	printf("Enter a Integer number :- ");
	scanf("%d",&i);
	printf("Enter a Floot Numner :- ");
	scanf("%f",&f);
	printf("Enter a Character :- ");
	scanf(" %c", &c);
	
	printf("The Integer number is %d\n",i);
	printf("the Floot Number is %.2f\n",f);
	printf("The Character is %c\n",c);	
	
	return 0;
}
