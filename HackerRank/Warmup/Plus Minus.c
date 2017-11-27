#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int j,arr[n];
    float b,c,a;
    for(int i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }
    for(int j= 0; j < n; j++)
    {
        if (arr[j]<0)
        {
            b=b+1;}
        else if (arr[j]>0)
        {
            c=c+1;}
        else 
        {
            a=a+1;}
    }
         a=a/n;
    b=b/n;
    c=c/n;
        printf("%f\n",c);
        
        printf("%f\n",b);
       printf("%f\n",a); 

  
    return 0;
}
  
