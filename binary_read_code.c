#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	FILE *input;
  if ((input=fopen("binary_output.bin","rb"))==NULL)
  {
  	printf("Failed to open binary file file\n");
  }
  else
   {
    printf("Binary file opened successfully\n");
   }
  float N;
  int n;
  for(n = 0; n < 2; n++)
   {
      fread(&N, sizeof(float), 1, input); 
      printf("%f\n",N);
   }
   fclose(input); 
   printf("Binary file closed\n");
  
  return 0;
}
