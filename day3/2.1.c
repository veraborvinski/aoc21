#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	 //Initialize variables
	//Used to check whether line matches the values generated so far
    int control[12];
	//Set to match the value of gamma's first integer generated previously
    control[0] = 0;
	//Counter of 0's, 1's and t used to compare to current line to control
    int a,b,t;
	//Repeats read cycle for each integer position of the binary numbers
    for (int i = 1; i < 13; ++i)
    {
	    //Prints current cycle
        printf("run %d\n", i);
	    //Opens input file for reading
        FILE *fp = fopen( "input.txt", "r" );
	    //If file is able to be read
        if (fp!=NULL) 
	{
		//Current line
            char line[14];
		//While line is not null, continue reading
            while(fgets(line, 14, fp)!= NULL)
            {
                //t is reset
                    t=0;
		    //Matches current line with control
                    for (int j = 0; j < i; ++j)
                    {
                        if (line[j]==(control[j]+48))
                        {
                            t++;
                        }
                    }
		    //Print line and increase a if current position is 0 and line matches control
                    if(line[i] == 48 && t == i)
                    {
                        printf("%s\n", line);
                        a++;
                    }
		    //Print line and increase counter if current position is 1 and line matches control
                    else if(line[i] == 49 && t == i)
                    {
                        printf("%s\n", line);
                        b++;
                    }
            }
		//If there are more 0's than 1's
            if(a>b)
            {
                control[i] = 0;
            }
		//If there are more 1's than 0's
            else if (b>a)
            {
                control[i] = 1;
            }
		//if there is an equal amount of 0's and 1's
            else if(a==b)
            {
                control[i] = 1;
            }
		//Reset counters
            a=0;
            b=0;
            
        }
	    //Close file
        fclose (fp); 
    }
	//Return statement
	return 0;
}
