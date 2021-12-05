#include <stdio.h>
#include <string.h>

int main(){
	//Input file is opened for reading
	 FILE *fp = fopen( "input.txt", "r" );
	//Variables are initialized
	//The current number being read from file
    int number;
	//The current direction being read from file
    char direction[10];
	//Value of the total horizontal direction
    int hor;
	//Value of the total dept
    int dept;
	//Product
    int prod;
	//if the file is able to be read
    if (fp!=NULL) 
    {
	    //Read the next direction and value while neither is null
        while(fscanf(fp, "%s %d", direction, &number) == 2)
        {
    		//If the direction is forward, add number to the horizontal value
           if (strcmp(direction, "forward")==0)
           {
               hor += number;
           }
		//If direction is up, subtract number from dept
           else if (strcmp(direction, "up")==0)
           {
               dept -= number;
           }
		//If direction is down, add number to dept
           else if (strcmp(direction, "down")==0)
           {
               dept += number;
	   }   
        }
	    //Set prod to product of the total horizontal value and total dept
        prod = hor*dept;
	    //print prod
        printf("%d\n", prod);
	    //close file
        fclose (fp);
    }
	//return statement
	return 0;
}
