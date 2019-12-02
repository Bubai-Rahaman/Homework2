#include <stdio.h> 
#include <stdlib.h> 
#include <gsl/gsl_statistics.h>
int main() 
{ 
  
     
    double* Dynamic_array ,mean, var; 
    int size=100,i;
  Dynamic_array = (double*)malloc(size*sizeof(double)); 
    
  for (i = 0; i < size; i += 1)
  {
   //asigning array
     Dynamic_array[i]=(i+1)*(i+1);
  }
  
  mean     = gsl_stats_mean(Dynamic_array, 1, size);
  var = gsl_stats_variance(Dynamic_array, 1, size);
 

  

  printf ("The mean is %g\n", mean);
  printf ("The variance is %g\n", var);

  free(Dynamic_array);
  return 0;
  
}
