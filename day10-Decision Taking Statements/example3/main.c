#include<stdio.h>

int main(){
	float num1,num2;
	printf("Enter the first number :");
	fflush(stdout);
	scanf("%f" ,&num1);
	printf("Enter the Second number :");
	fflush(stdout);

	scanf("%f" ,&num2);
	int inum1,inum2;
	inum1=num1;
	inum2=num2;

	if((inum1 != num1) || (inum2 != num2) ) printf("Warning -comparing only the integer part \n");

	if(inum1==inum2){
		printf("Numbers are equal");
	}
	else{
		if (inum1<inum2){
			printf("Num2 is Bigger");

		}
		else{
			printf("Num1 is Bigger");
		}

	}

	return 0;
}



