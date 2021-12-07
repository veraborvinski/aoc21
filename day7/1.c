#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getNum();

int main(){

	printf("%d\n", getNum());
	return 0;
}

int getNum(){
    int num;
    int lowestsofar;
    int prevsum;
    for (int i = 1; i < 1500; ++i)
    {
        int sum = 0;
        FILE *fp = fopen( "input.txt", "r" );
        if (fp!=NULL) 
        {
            while (fscanf(fp, "%d, ", &num)==1)
            {
                sum += abs(num-i);
                
            }
            fclose (fp);
        }
        if(sum < prevsum){
            lowestsofar = sum;
        }
        prevsum = sum;
    }
    return lowestsofar;
}
