#include"function.h"

int main()
{	
	int i,n=100;
	float float_2[2];
	float* float_100; 
	
	
	//creating array of 100 float elements
	float_100 = (float*)calloc(100,sizeof(float));
	
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
	
	FILE *bin_pointer ; 
      
   
      
   bin_pointer =fopen("binary_output.bin", "wb") ; 
      

    if ( bin_pointer == NULL ) 
    { 
        printf( "binary_output.bin file failed to open." ) ; 
    } 
    else
    { 
          
        printf("The binary file is now opened to write.\n") ; 
          
        
       // writing in the file
       fwrite(&float_2[0],sizeof(float_2[0]),1,bin_pointer);
       fwrite(&float_2[1],sizeof(float_2[1]),1,bin_pointer);
       // Closing the file 
       fclose(bin_pointer) ; 
          
        printf("Output written sucessfully in binary_output.bin\n"); 
        printf("The file is closed.\n") ; 
    } 
  
	free (float_100);
	return(0);
}
