//Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.
#include <stdio.h>

int main(void) {
  int employeeID;
	int workingHours;
	double sarlaryPerHour,sarlary;
	
	printf("Employee ID:");
	scanf("%d",&employeeID);
	printf("Working Hours:");
	scanf("%d",&workingHours);
	printf("Salary amount/hr:");
	scanf("%lf",&sarlaryPerHour);

	sarlary = workingHours * sarlaryPerHour;
	
	printf("Employee ID: %d\n",employeeID);
	printf("Working Hour: %d\n",workingHours);
	printf("Total Salary: %.2lf\n",sarlary);
  return 0;
}