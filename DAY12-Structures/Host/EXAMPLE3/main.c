
#include <stdio.h>

struct data
{
    int data1;
    char data2;
    char data4;
    int data5;

     struct dat
     {
        int data5;
        char  data6;
     }moreData;
}definedata;


int main()
{
    //struct data definedata;

    definedata.data1 =0x11;
    definedata.moreData.data5=0xFFFFEEEE;
    definedata.moreData.data6=0xFF;



    printf("%x \n",definedata.moreData.data5);
    printf("%x \n",definedata.moreData.data6);
    return 0;

}


