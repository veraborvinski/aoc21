#include <stdio.h>
#include <string.h>

int main(){

	//opens the input file
	FILE *fp = fopen( "input.txt", "r" );
	//initializes variables
	//Holds the number being read from the file
    int number;
	//The first number in the file, set manually
    int prev = 141;
	//Counter
    int i = 0;
	//If the file is readable
    if (fp!=NULL) 
    {
	    //updates the number being read from file while it is not null
        while(fscanf(fp, "%d", &number) == 1)
        {
		//If the current number is greater than the previous number, increase counter
            if(number>prev)
            {
                i++;
            }
		//Set previous number to cureent number (and set current to next)
            prev = number; 
        }
	    //Prints counter
        printf("i: %d\n", i);
	    //Closes file
        fclose (fp);
    }
	//Return statement
	return 0;
}
