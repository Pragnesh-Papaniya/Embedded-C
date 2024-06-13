#include<stdio.h>

void displayString(char str[]);

int main()
{
	char name[]="Pantech solutions";
	displayString(name);
	return 0;
}

void displayString(char str[])
{
	printf("String Output \n");
	fflush(stdout);
	puts(str);

}
