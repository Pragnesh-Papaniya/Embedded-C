#include <stdio.h>

// separable nested structure
struct var{
		int dd;
		int yyyy;
	}var_Doj;



struct Employee
{
	int id;
	struct var var1;

}var_Employee;

int main()
{
	var_Employee.id=120;
	var_Employee.var1.dd=24;
	var_Employee.var1.yyyy=2022;

	printf("Employee Id: %d \n",var_Employee.id);
	printf("Year Joined: %d \n",var_Employee.var1.yyyy);

	return 0;
}



