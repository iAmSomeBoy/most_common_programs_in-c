#include<stdio.h>

int main()
{
	int n , i , f1 ,f2, f3 ;
	
	printf("Enter Fibonacci range \t");
	scanf("%d",&n);
	
	printf("First %d numbers of Fibonacci series \n",n);
	f1 = 1; 
	f2 = 1 ;
	
	printf("%d \n",f1);
	printf("%d \n",f2);
	i = 3;
	
	while(i< n)
	{
	   f3 = f1 + f2 ;
	   printf("%d\n",f3);	
		f1 = f2 ;
		f2 = f3 ;
		i++ ;
	}
	
	
	
	
	
	return(0);
}