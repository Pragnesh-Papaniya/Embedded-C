
#include <stdio.h>

struct data
{
    char data1;
    int data2;
    char data3;
    short data4;
}varData;

void displayElements(struct data varData);


void displayElements(struct data varData)
{
	    int data5;
	    data5= varData.data1;
	    printf("%x \n",data5);
	    // write the data
	    varData.data1=0x22;
	    // Read the data
	    data5= varData.data1;
	    printf("stored value in data1 using structure pointer  \n");
	    printf("%x \n",varData.data1);
	    printf("%x \n",data5);

}
int main()
{
    struct data varData;

    varData.data1 =0x11;
    varData.data2=0xFFFFEEEE;
    varData.data3=0xFF;
    varData.data4=0xA5A5;
    printf("stored value in data1  \n");
    printf("%x \n",varData.data1);
    displayElements(varData);

    return 0;
}







