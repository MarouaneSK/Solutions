#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,a,i; 
    scanf("%d",&n);
   for (i=1;i<11;i++)
   {
       if (n>1 && n<21)
           a=n*i ;
            
        printf("%d" " x " "%d" " = " "%d\n",n,i,a);
   }
    

}
