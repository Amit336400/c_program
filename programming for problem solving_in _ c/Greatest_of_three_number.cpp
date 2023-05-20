//grater Number In Three Number
#include<stdio.h>
int main(){
	printf("Enter The first number ");
	int a,b,c;
	
	scanf("%d",&a);
	printf("Enter The second Number");
	scanf("%d",&b);
	printf("Enter The Threed Number ");
	scanf("%d",&c);
	
	if(a>b&&a>c)
	{
		printf("The Greatest Nunmber Is %d",a);
	}else if(b>a&&b>c){
		printf("The Greatest NUmber Is %d",b);
	}
	else{
		printf("The Greatest Number Is %d",c);
	}
	
	return 0;
}
