#include <stdio.h>
#include <stdint.h>

void displayArray(uint8_t *pointerArray, uint32_t len);

int main()
{
	uint8_t myData[10]={0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA};

	uint32_t length_of_array=sizeof(myData)/sizeof(uint8_t);

	//displayArray(myData+5, length_of_array-5);
	displayArray(&myData[5], length_of_array-5);
}

void displayArray(uint8_t *pointerArray, uint32_t len)
{
	for (uint32_t i=0;i<len;i++)
		{
			printf("%x  \n" ,*(pointerArray+i));
			//printf("%x  \n" ,pointerArray[i]);
		}

}
