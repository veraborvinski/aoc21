#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	//Initialze variables
	//Since gamma is a binary number with a length greater than 10, it's digits are kept in an array
    int gamma[12];
	//Since epsilon is a binary number with a length greater than 10, it's digits are kept in an array
    int epsilon[12];
	//Amount of 0's(a) and 1's(b) in a line
    int a,b;
	//Repeats read cycle for each digit's position in the binary numbers(0-12) 
    for (int i = 0; i < 13; ++i)
    {
	    //Opens input file for reading
        FILE *fp = fopen( "input.txt", "r" );
	    //If the file is able to be opened
        if (fp!=NULL) 
        {
		//Next line
            char line[14];
		//Scans the next line in
            while(fgets(line, 14, fp)!= NULL)
            { 
            	//Increases counter based on value of line in i's position
               if(line[i] == 48)
               {
                    a++;
               }
                else
                {
                    b++;
                }
            }
		//If there are more 0's than 1's
            if(a>b)
            {
                gamma[i] = 0;
                epsilon[i] = 1; 
            }
		//If there are more 1's than 0's
            else
            {
                gamma[i] = 1;
                epsilon[i] = 0; 
            }
		//Reset counters
            a=0;
            b=0;
        }
	    //close file
        fclose (fp); 
    }
	//Print gamma and epsilon
    printf("\ngamma:");
    for (int i = 0; i < 13; ++i)
    {
        printf("%d", gamma[i]);
    }
    printf("\nepsilon:");
    for (int i = 0; i < 13; ++i)
    {
        printf("%d", epsilon[i]);
    }
	//Return statement
	return 0;
}
