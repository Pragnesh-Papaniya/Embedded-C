#include <stdio.h>
struct Point{
	int x;
	int y;

};

int main()
{
	struct Point p1;
	p1.x=50;
	p1.y=60;
	printf("%d \n",p1.x);
	printf("%d \n",p1.y);
	return 0;

}
