
#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

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
