#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int answer;
	int count = 0;

	printf("\n Choose a number different from 0 : \n");
	scanf("%d", &answer);
	if (answer != 0)
	{
		while (count < answer)
		{
			printf("%d \n",count);
			count = count + 1;
		}
	}
	else
	{
		printf("Number is 0");
	}
}
