
#include<Stdio.h>
#include<stdint.h>
int choice;
int c;

int main(){
	printf("enter the choice:");
	fflush(stdout);
	scanf("%d",&choice);
	do{

		switch (choice)
		{
		case 1:
			printf("Your selection is 1 \n");
			break;
		case 2:
			printf("Your selection is 2 \n");
			break;
		case 3:
			printf("Your selection is 3 \n");
			break;
		default:
			printf("Default executed \n");
			break;
		}
		printf("enter the choice:");
		fflush(stdout);
		scanf("%d",&choice);
		printf("enter 1 to continue :");
		fflush(stdout);
		scanf("%d",&c);

	}while(c==1);
printf("\n program terminated");
	return 0;
}






