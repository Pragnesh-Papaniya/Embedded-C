#include <stdio.h>
#include <stdint.h>

int main(){

	uint8_t myData[10]={0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA};

/// WRITE A DATA
	//*(myData+1)=0xFF;
	myData[1] =0xFF;

	//printf("%x  \n" ,*(myData+1));
	for (uint32_t i=0;i<10;i++)
	{
		//printf("%x  \n" ,*(myData+i));
		printf("%x  \n" ,myData[i]);
	}

	return 0;
}

