#include<stdio.h>

int main()
{	
	int year;

	printf("Enter your year\n");
	scanf("%d",&year);
	
	if((year%4==0 && year%100!=0)||(year%400==0))
	printf("Your year is leap year\n");
	
	else
	printf("Your year is  not leap year\n");
	
	
	
	
	
	
	
	
	return(0);
}