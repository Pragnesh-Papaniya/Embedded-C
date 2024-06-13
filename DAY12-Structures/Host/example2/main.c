#include<stdio.h>
#include<stdint.h>

struct Dataset
{
char data1;
int data2;
char data3;
short data4;



}__attribute__((packed));

int main(){

	struct Dataset data;
	data.data1 =0x11;
	data.data2=0xffffeeee;
	data.data3=0x22;
	data.data4=0xabcd;

	uint8_t *ptr;
	ptr=(uint8_t*)&data;
	uint32_t sizeofdata=sizeof(data);

	printf("Memory address content \n");

	for(uint32_t i=0;i<sizeofdata; i++)
	{

		printf("%p     %x \n",ptr,*ptr);
		ptr++;


	}

   printf("size of the struct variable  %u \n",sizeof(data));
	return 0;



}

