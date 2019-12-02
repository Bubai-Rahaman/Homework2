#include<stdio.h>
#include<limits.h>
#include<float.h>


int main()
{
	//Minimum machine number in 'signed char'
	printf("Minimum machine number of 'signed char' is %d\n",SCHAR_MIN);
	
	//Maximum machine number in 'signed char'
	printf("Maximum machine number of 'signed char' is %d\n",SCHAR_MAX);
	
	//Maximum machine number in 'unsigned char'
	printf("Maximum machine number of 'unsigned char' is %d\n",UCHAR_MAX);
	
	//Minimum machine number in 'int'
	printf("Minimum machine number of 'int' is %d\n",INT_MIN);
	
	//Maximum machine number in 'int'
	printf("Maximum machine number of 'int' is %d\n",INT_MAX);
	
	//Minimum machine number in 'long int'
	printf("Minimum machine number of 'long int' is %ld\n",LONG_MIN);
	
	//Maximum machine number in 'long int'
	printf("Maximum machine number of 'long int' is %ld\n",LONG_MAX);
	
	//Minimum machine number in 'float'
	printf("Minimum machine number of 'float' is %.10e\n",FLT_MIN);
	
	//Maximum machine number in 'float'
	printf("Maximum machine number of 'float' is %.10e\n",FLT_MAX);
	
	//Minimum machine number in 'double'
	printf("Minimum machine number of 'doubel' is %.10e\n",DBL_MIN);
	
	//Maximum machine number in 'float'
	printf("Maximum machine number of 'double' is %.10e\n",DBL_MAX);
}
