#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void mean_varience(float float_arbitrary[],float float_2[2],int n)
{
	int i;
	float mean, varience,sum1=0,sum2=0;
	
	for(i=0;i<n;i++)
	{
		sum1+=float_arbitrary[i];
		sum2+=float_arbitrary[i]*float_arbitrary[i];
	}
	mean = sum1/n;
	
	varience = ((sum2/n)-mean*mean);
	
	float_2[0] = mean;
	float_2[1]= varience;
	
}

int main()
{	
	int i,n=100;
	float float_2[2];
	float* float_100; 
	
	//creating array of 100 float elements
	float_100 = (float*)malloc(100*sizeof(float));
	
	//Assiging value to the array
	for(int i=0;i<100;i++)
	{
		float_100[i] = (i+1)*(i+1);
	}
	mean_varience(float_100,float_2,n);
	
	for(i=0;i<2;i++)
	{
		printf("%f\n",float_2[i]);
	}
	free (float_100);
}
