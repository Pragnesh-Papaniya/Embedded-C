#include<stdio.h>
#include<stdint.h>

struct carModel
{
	uint32_t carNumber;
	uint32_t carPrice;
	uint32_t carMaxspeed;
	float carWeight;


};

int main(){

	struct carModel carBMW={9668,15000,220,1220};
	struct carModel carFord={.carWeight=1000,.carPrice=14000,.carNumber=1234,.carMaxspeed=100};
	uint32_t testnumber;

 printf("Details of the BMW \n");
 printf("Car number =%u \n",carBMW.carNumber);
 printf("Car Price =%u \n",carBMW.carPrice);
 printf("Car Weight =%f \n",carBMW.carWeight);
 printf("Car Maxspeed =%u \n",carBMW.carMaxspeed);

 carFord.carNumber=7890;
 carFord.carPrice=123;
 carFord.carWeight=1111;

 printf("Details of the Ford \n");
 printf("Car number =%u \n",carFord.carNumber);
 printf("Car Price =%u \n",carFord.carPrice);
 printf("Car Weight =%f \n",carFord.carWeight);
 printf("Car Maxspeed =%u \n",carFord.carMaxspeed);

 testnumber=carFord.carNumber;
 printf("Car number =%u \n",testnumber);
	return 0;
}
