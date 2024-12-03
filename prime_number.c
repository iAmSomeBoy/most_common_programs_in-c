#include <stdio.h>

int main() 
{
	int i, num, isprime=1;
	
	printf("Enter any positive number\n ");
	scanf("%d",&num);
	
	if(num<=0)
	printf("Given number %d is not prime number\n",num);
	
	for(i=2;i<num;i++)
		{
			if(num % i == 0)
				{
					isprime=0;
					break;
				}
		}
	
	if(isprime)
	{
		printf("Given number %d is prime number\n",num);
	
	}
	
	else
	printf("Given number %d isnot prime number\n",num);
	
	
	
	
	return(0);
}