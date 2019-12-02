#include"function.h"

void mean_varience(float float_arbitrary[],float float_2[2],int n);
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
