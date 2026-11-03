#include <stdlib.h>
#include <stdio.h>

int main(void) {
	char word[50];
	int count = 5;

	printf("\nChoose a word : ");
	scanf("%s", word);
	printf("\n");
	
	while (count > 0)
	{
		printf("%s\n",word);
		count = count - 1;
	}
}
