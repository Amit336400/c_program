#include<stdio.h>
int main(){
	char c;
	printf("Enter A Alphbet ");
	scanf("%c",&c);
	
	switch(c){
		case 'a':
		case 'A':
			printf("Given Alphabet '%c' is Vowel",c);
			break;	
		
		case 'e':
		case 'E':
		     printf("Given Alphabet '%c' is Vowel",c);
			 	break;
			 	
		case 'I':
      	case 'i':
			printf("Given Alphabet '%c' is Vowel",c);
			break;
			
		case 'o':
		case 'O':
			printf("Given Alphabet '%c' is Vowel",c);
			break;
				
		case 'u':
		case 'U':
			printf("Given Alphabet '%c' is Vowel",c);
			break;	
					
			
		default:
			printf("Given Alphabet Is '%C' Consoneant",c);
	}
	
	
	
	
	return 0;
}
