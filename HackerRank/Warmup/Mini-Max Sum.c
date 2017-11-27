#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
   
    int *arr = malloc(sizeof(int) * 5);
  
    scanf("%ld",&arr[0]);
long int   min=arr[0] ,max=arr[0] ,i,sum=arr[0]+sum;
    for( i = 1;i < 5; i++)
    {
       scanf("%ld",&arr[i]);
        if (arr[i] <min)
            min=arr[i];
        else if (arr[i]>max)
            max = arr[i] ;
        sum=arr[i]+sum;
    }
    
     printf("%ld %ld",sum-max, sum-min );   
    return 0;
            
}
