#include<stdio.h>

struct data
{
	char Data1;
	int Data2;
	char Data3;
	short Data4;

}varData;
void displayElements(struct data *pointerData)
{
	    int Data5;
	   // write data
		pointerData->Data1=0x22;
		//read data
		Data5=pointerData->Data1;
		printf("Stored Value in Data1 \n");
		printf("%x  \n",pointerData->Data1);
		printf("%x  \n",Data5);
}

int main()
{
	varData.Data1=0x11;
	varData.Data2=0xAAAABBBB;
	varData.Data3=0xFF;
	varData.Data4=0xA5A5;
	printf("Stored Value in Data1 \n");
	printf("%x  \n",varData.Data1);
	displayElements(&varData);
	return 0;
}




