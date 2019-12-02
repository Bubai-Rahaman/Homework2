#include"function.h"

int main()
{	
	int i,n=100;
	float float_2[2];
	float* float_100; 
	
	
	//creating array of 100 float elements
	float_100 = (float*)calloc(100,sizeof(float));
	
	printf("The value of array\n");
	//Assiging value to the array
	for(int i=0;i<100;i++)
	{
		printf("%f\n",float_100[i]);
		float_100[i] = (i+1)*(i+1);
	}
	mean_varience(float_100,float_2,n);
	
	for(i=0;i<2;i++)
	{
		printf("%f\n",float_2[i]);
	}
	free (float_100);
	return(0);
}
