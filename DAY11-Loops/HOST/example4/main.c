
#include<Stdio.h>
#include<stdint.h>

int main(){
int i,j,k;
for (i=1,j=1,k=1; i< 2,j<5,k<10; i++)
{
	j+=2;
	k+=3;
	printf("Value of a : %d  %d %d\n",i,j,k);
}

	return 0;
}


