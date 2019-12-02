#include<stdio.h>

long int factorial(int N)
{
	int i;
	long int fact=1;
	
		//recursion to calculate factorial
	for(i=0;i<N;i++)
	{
		fact=fact*(i+1);
	}
	return(fact);
}
