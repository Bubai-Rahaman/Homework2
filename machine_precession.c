#include<stdio.h>
#include<math.h>
#include<float.h>

int main()
{
	float r_error1,r_error2;
	
	//mahine precision
	printf("machine preceision for float is %e\n",FLT_EPSILON);
	
	//define PI
	float PI = 3.141592; // since machine precession 10^(-7)
	
	r_error1 =(fabs(PI-3.141592))/3.141592;
	printf("Relative error in storing Pi is %.3e  \n",r_error1);
	
	//define 2.0 in float data type
	float two=2.0;
	
	r_error2 = (fabs(two-2.0))/2.0;
	printf("Relative error in storing 2.0 is %.3e  \n",r_error2);
	
	printf("When float data type is used Pi is not a machine number but 2.0 is machine number\n");
	
}
