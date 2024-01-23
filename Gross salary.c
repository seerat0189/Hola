#include <stdio.h>
int main()
{
	// Basic salary, 40% DA, 20% HRA, Gross salary = Basic salary + DA + HRA
	int b_salary;
	scanf("%d", &b_salary);
	float da, hra, g_salary;
	da = 0.4 * b_salary;
	hra = 0.2 * b_salary;
	g_salary = b_salary + da + hra;
	printf("Gross salary = %f", g_salary);
	return 0;
}
