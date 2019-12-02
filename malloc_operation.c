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
	
	FILE *txt_pointer ; 
      
   
      
   txt_pointer =fopen("txt_output.txt", "w") ; 
      

    if ( txt_pointer == NULL ) 
    { 
        printf( "txt_output.txt file failed to open." ) ; 
    } 
    else
    { 
          
        printf("The txt file is now opened to write.\n") ; 
          
        
       // writing in the file
        fprintf(txt_pointer, "%f \n %f\n", float_2[0],float_2[1]);
            
       // Closing the file 
       fclose(txt_pointer) ; 
          
        printf("Output written sucessfully in txt_output.txt\n"); 
        printf("The file is closed.\n") ; 
    } 
  
	free (float_100);
	return(0);
}
