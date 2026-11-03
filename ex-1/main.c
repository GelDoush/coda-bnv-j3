#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int response;
	printf("\nchoose a number : \n");
	scanf("%d",&response);
	if (response < 42)
	{
		printf("\nNumber is under 42\n");
	}
	else if (response > 42)
	{
		printf("\nNumber is above 42\n");
	}
	else if (response == 42)
	{
		printf("\nYour number is equal to 42 \n");
	}
	exit(0);

}
