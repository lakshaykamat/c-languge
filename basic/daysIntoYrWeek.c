#include <stdio.h>
float getYear(int days){
	//365 days = 1 year
	return days/365.0;
}
float getWeek(int days){
	//7days = 1 week
	return days/7.0;
}
int main(void) {
  int days;
	printf("Enter Days:");
	scanf("%d",&days);
	printf("Year %f\n",getYear(days));
	printf("Week %f\n",getWeek(days));
  return 0;
}