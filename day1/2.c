#include <stdio.h>
#include <string.h>

int main(){
	//Opens input file to read
	 FILE *fp = fopen( "input.txt", "r" );
	//Initilaizes variables
	//Current number being read from file
    int number;
	//Last to hold new number from file(n-1)
    int A = 0;
	//Second to hold new number from file(n)
    int B = 0;
	//First to hold new number from file(n+1)
    int C = 0;
	//Counter
    int i = 0;
	//If file is able to be opened
    if (fp!=NULL) 
    {
	    //A is set to the first number of the file
        fscanf(fp, "%d", &A);
	    //B is set to second number in file
        fscanf(fp, "%d", &B);
	    //C is set to third number in file
        fscanf(fp, "%d", &C);
	    //New numbers are read in as long as the next number is not null
        while(fscanf(fp, "%d", &number) == 1)
        {
		//If number is greater than a then the product number*B*C must be greater than the product A*B*C
		//Therefor the counter increases
            if(number>A)
            {
                i++;
            }
		//A is set to B
            A=B;
		//B is set to C
            B=C;
		//C os set to number, a new number is read from file
            C=number;
            
        }
	    //Counter is printed
        printf("i: %d\n", i);
	    //File is closed
        fclose (fp);
    }
	//Return statement
	return 0;
}
