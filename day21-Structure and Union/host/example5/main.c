#include<Stdio.h>
#include<stdint.h>

#define NUMBER -2UL


int main()
{

#ifdef NUMBER

#if (NUMBER >0)
printf("value of number greater than 0 \n");
#else
		printf("value of number less than 0 \n");

#endif


#endif
	return 0;
}

