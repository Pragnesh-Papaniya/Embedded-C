#include<stdio.h>

int main(){
	int num1,num2;
	printf("Enter the first number :");
	fflush(stdout);
	scanf("%d" ,&num1);
	printf("Enter the Second number :");
	fflush(stdout);

	scanf("%d" ,&num2);

	if(num1==num2){
		printf("Numbers are equal");
	}
	else{
		if (num1<num2){
			printf("Num2 is Bigger");

		}
		else{
			printf("Num1 is Bigger");
		}

	}

	return 0;
}


