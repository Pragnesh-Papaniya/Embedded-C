#include<stdio.h>

int main(){
	char value;
	printf("enter the value :");
	fflush(stdout);
	scanf("%c",&value);

	switch(value){

	case 'a' :

		printf("The value is a :");

		break;

	case 'b':
		printf("The value is b :");

		break;

	case 'c':
		printf("The value is c :");

		break;

	default:

		printf("default :");
		break;
	}
	return 0;


}
