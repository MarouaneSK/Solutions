#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T , i , j=0 , k=1 , n;
    scanf("%d",&T);
    for (i=0;i<T;i++)
    {    
         char S[10000];
         scanf("%s",&S);
         n=strlen(S);
         for(j=0;j<n ;j=j+2) 
         {
             printf("%c",S[j]);
         }   
         printf(" ");
        for(k=1;k<n ;k=k+2)
         {
             printf("%c",S[k]);
         }   
        printf("\n");
    }
   
    return 0;
}
