#include<stdio.h>
int main(){
	int a,b;
	char c;
	printf("Enter two digits\n");
		printf("Press 1 for addition\n");
		printf("Pree 2 for subtraction\n");
		printf("press 3 for multiplication\n");
		printf("press 4 for division\n");
		printf("press 5 for modulus\n ");
	scanf("%d %d %c",&a,&b,&c);
    switch(c){
	case '+':
		c=a+b;
		printf("The addition is %d",c);
		break;
	case '-':
		c=a-b;
		printf("The subtraction is %d",c);
		break;
	case '*':
		c=a*b;
		printf("The multiplication is %d",c);
		break;
	case '/':
		c=a/b;
		printf("The division is %d",c);
		break;
	case '%':
		c=a%b;
		printf("The modulus is %d",c);
		break;
	default:
		printf("invalid");
		break;
   }
   return 0;
		
}
