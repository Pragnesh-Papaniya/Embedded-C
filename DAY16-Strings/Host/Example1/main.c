#include<stdio.h>

int main()
{
	char str[]="Hello World";
	int  len= sizeof(str);
	int  len2= strlen(str);

	printf("%d \n",len);
	printf("%d \n",len2);

	printf("Hello World\n");
	printf("%s\n" ,str);


	return 0;
}


