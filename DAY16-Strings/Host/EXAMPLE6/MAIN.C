#include <stdio.h>
#include <stdint.h>


int main(void)
{

	char msg[] ="Hello World";
	char *pointerMsg="Hello World";

	msg[0]='A';
	pointerMsg[0]='A';

	printf("Address is %s \n ",msg);
	printf("Address is %s \n ",pointerMsg);
	printf("Address is %p \n ",&msg);
	printf("Address is %p \n ",&pointerMsg);
	printf("Address is %p \n ", msg);
	printf("Address is %p \n ", pointerMsg);



	for(;;);
}



