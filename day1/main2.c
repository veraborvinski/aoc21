#include <stdio.h>
#include <string.h>

int main(){

	 FILE *fp = fopen( "input.txt", "r" );
    int number;
    int A = 0;
    int B = 0;
    int C = 0;
    int prod = 0;
    int preprod = 0;
    int i = 0;
    if (fp!=NULL) 
    {
        fscanf(fp, "%d", &A);
        fscanf(fp, "%d", &B);
        fscanf(fp, "%d", &C);
        while(fscanf(fp, "%d", &number) == 1)
        {
            prod = A*B*C;
            if(number>A)
            {
                i++;
            }
            A=B;
            B=C;
            C=number;
            preprod = prod;
           printf("number: %d\n", prod);
            
        }
        printf("i: %d\n", i);
        fclose (fp);
    }
	return 0;
}