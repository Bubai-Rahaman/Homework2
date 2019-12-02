#include<stdio.h>
#include<time.h>

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

int main()
{	
	clock_t start,end;
	int N,i;
	long int fact;
	double cpu_time_used;
	
	//input
	printf("Enter the number of which you want to calculate factorial:\n");
	scanf("%d",&N);
	
	start = clock();
	for(i=0;i<100;i++)
	{
		fact=factorial(N);
	}
	end = clock();
	
	cpu_time_used = ((double) ((end - start)) / CLOCKS_PER_SEC)/100;
	
	printf("Time required = %.20e sec\n",cpu_time_used);
	printf("Factoral of %d is %ld\n",N,fact);
	
	printf("It is the fastest method compare to other three\n");
}
