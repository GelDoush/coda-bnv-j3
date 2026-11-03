#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int answer;
	char symbol;
	int count;

	printf("\nChoose a number : \n");
	scanf("%d",&answer);
	printf("\nChoose a symbol (- or +) : \n");
	scanf(" %c", &symbol);
	
	if (symbol=='-')
	{
		count=answer;
		while(count>-1)
		{
			printf("%d\n",count);
			count = count-1;
		}
	}
	else if (symbol=='+')
	{
		count=0;
		while(count<answer+1)
		{
			printf("%d\n",count);
			count = count+1;
		}
	}
	else
	{
		printf("wrong symbol\n");
	}

	return 0;
}
