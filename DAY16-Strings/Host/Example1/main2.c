#include<stdio.h>

int main()
{
	char str[40];

	printf("Type the name: ");
	fflush(stdout);
	scanf("%[^\n]s",str);
	printf("%s\n" ,str);


	return 0;
}


