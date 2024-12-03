#include<stdio.h>

int main() 
{
	int n , sum=0 , i ;
    printf("Enter the range of the series");
    scanf("%d",&n);	
	
	for(i = 1 ; i<= n ; i = i +1 )
	{
		sum= sum + i ;
		
		
	}
	
	printf("SUM of Series = %d",sum);
	
	return(0);
}