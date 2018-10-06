#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
    int n; 
    scanf("%d",&n);
    int i,x=0;
    /* if there are a number of '#' in a line then there are 'n - a' number of 
    blanks */
    while(x++ < n)
    {
        i = 0;
        while(i++ < n - x)
            printf(" ");//
    
        for (i=0;i<x;i++)
            printf("%c",'#');
    
        printf("\n");
    
    }
    return (0);
}
