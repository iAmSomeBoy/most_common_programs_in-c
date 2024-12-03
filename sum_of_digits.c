#include<stdio.h>

int main()
{
	int i , rem , sum = 0;
	
	printf("Enter any number \t");
	scanf("%d",&i);
	
	while(i>0)
	{
		rem = i % 10 ;
		sum = sum + rem ;
		i=i/10;
	}
	printf("SUM = %d", sum);
	
	return(0);
}