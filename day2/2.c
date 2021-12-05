#include <stdio.h>
#include <string.h>

int main(){
	//Open input file to read
	 FILE *fp = fopen( "input.txt", "r" );
	//Initialize variables
	//The next number being read from file
    int number;
	//The direction being read from file
    char direction[10];
	//The total horizontal direction
    int hor;
	//The total dept
    int dept;
	//The product
    int prod;
	//The aim
    int aim;
	//If the file is able to be read
    if (fp!=NULL) 
    {
	    //Reads the current number and direction while they are nut null
        while(fscanf(fp, "%s %d", direction, &number) == 2)
        {
    		//If the direction is forward, add to horizontal and dept sums
           if (strcmp(direction, "forward")==0)
           {
               hor += number;
               dept += aim*number;
           }
		//If direction is up, subtract from the aim
           else if (strcmp(direction, "up")==0)
           {
               aim -= number;
           }
		//If direction is down add to the aim
           else if (strcmp(direction, "down")==0)
           {
               aim += number;
           }   
        }
	    //Calculate product
        prod = hor*dept;
	    //Print product
        printf("prod: %d\n", prod);
	    //Close file
        fclose (fp);
    }
	//Return statement
	return 0;
}
