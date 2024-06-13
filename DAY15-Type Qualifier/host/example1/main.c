#include<stdio.h>

#include<stdint.h>
 uint8_t const data =10;

int main()
{


	 uint8_t *ptrData;

	printf("%d \n",data);
	 ptrData=&data;

	 *ptrData =50;
	//data=50;

	printf("%d \n",data);

	return 0;
}

