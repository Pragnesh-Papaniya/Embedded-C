#include<stdio.h>

int main(){
	int value;
	printf("enter the value :");
	fflush(stdout);
	scanf("%d",&value);
	switch(value){
	case 1 :
		printf("The value is 1 :");
		break;
	case 2:
		printf("The value is 2 :");
		break;
	case 3:
		printf("The value is 3 :");
		break;
	default:
		printf("The value is greater than 3 :");
		break;
	}
	return 0;


}
