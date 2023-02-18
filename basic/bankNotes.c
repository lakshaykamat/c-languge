/*Write a C program to read an amount (integer value) and break 
the amount into smallest possible number of bank notes.*/
#include <stdio.h>
int main(void) {
	int amount = 375;
	int total = amount/2000;
	printf("%i notes of 2000\n",total);
	amount = amount - (total*2000);
	total = amount/500;
	
	printf("%i notes of 500\n",total);
	amount = amount - (total*500);
	total = amount/100;
	
	printf("%i notes of 100\n",total);
	amount = amount - (total*100);
	total = amount/50;
	
	printf("%i notes of 50\n",total);
	amount = amount - (total*50);
	total = amount/20;
	
	printf("%i notes of 20\n",total);
	amount = amount - (total*20);
	total = amount/10;
	
	printf("%i notes of 10\n",total);
	amount = amount - (total*10);
	total = amount/5;
	
	printf("%i notes of 5\n",total);
	amount = amount - (total*5);
	total = amount/2;
	
	printf("%i notes of 2\n",total);
	amount = amount - (total*2);
	total = amount/1;
	
	printf("%i notes of 1\n",total);
  return 0;
}