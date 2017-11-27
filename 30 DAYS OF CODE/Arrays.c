#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i; 
    scanf("%d",&n);
    int*tab= malloc(sizeof(int) * n);
    int *arr = malloc(sizeof(int) * n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    } 
     for (i=n-1; i>-1 ; i-- )
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
