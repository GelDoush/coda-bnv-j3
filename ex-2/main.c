#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int nb1;
	int nb2;
	char symbol;
	int result;
	
	printf("\nChoose your first number : ");
	scanf("%d", &nb1);
	
	printf("\nChoose your second number : ");
	scanf("%d", &nb2);

	printf("\nChoose a symbol (+ | - | / | * | %%) : ");
	scanf(" %c", &symbol);
	if (symbol == '+')
	{
		result=nb1+nb2;
		printf("\n%d + %d = %d\n",nb1,nb2,result);
	}
	else if (symbol == '-')
	{
		result=nb1-nb2;
		printf("\n%d - %d = %d\n",nb1,nb2,result);
	}
	else if (symbol == '/')
	{
		result=nb1/nb2;
		printf("\n%d / %d = %d\n",nb1,nb2,result);
	}
	else if (symbol == '*')
	{
		result=nb1*nb2;
		printf("\n%d x %d = %d\n",nb1,nb2,result);
	}
	else if (symbol == '%')
	{
		result=nb1%nb2;
		printf("\n%d %% %d = %d\n",nb1,nb2,result);
	}
	else
	{
		printf("Wrong Symbol\n");
	}

	return 0;
}
