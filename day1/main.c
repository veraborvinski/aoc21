#include <stdio.h>
#include <string.h>

int main(){

	 FILE *fp = fopen( "input.txt", "r" );
    int number;
    int prev = 141;
    int i = 0;
    if (fp!=NULL) 
    {
        while(fscanf(fp, "%d", &number) == 1)
        {
            if(number>prev)
            {
                i++;
            }
            prev = number;
           printf("number: %d\n", prev);
            
        }
        printf("i: %d\n", i);
        fclose (fp);
    }
	return 0;
}