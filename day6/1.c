#include <stdio.h>
#include <string.h>

int getNum(int rounds);

int main(){

	printf("\n%d\n", getNum(80));
	return 0;
}

int getNum(int rounds){
    int curr[1000000];
    int prev[1000000];
    int count;
    for (int i = 0; i < 1000000; ++i)
    {
        curr[i] = -1;
        prev[i] = -1;
    }
    FILE *fp = fopen( "input.txt", "r" );
    if (fp!=NULL) 
    {
        int i;
        while (fscanf(fp, "%d, ", &curr[i])==1)
        {
            count++;
            i++;
        }
        
        fclose (fp);
    }
    for (int i = 0; i < rounds; ++i)
    {
        for (int j = 0; j < 1000000; ++j)
        {
            if (curr[j] == 0)
            {
                count++;
                prev[j] = 6;
                prev[count] = 8;
            }
            else if(curr[j]>0)
            {
                prev[j] = curr[j]-1;
            }
            curr[j]=prev[j];
        }
    }
    
    return count;
}
