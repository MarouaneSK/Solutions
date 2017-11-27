#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j; 
    scanf("%d",&n);
    int a[n][n] ,c ,b;
    c=0,b=0;
    for(int a_i = 0; a_i < n; a_i++)
    {
       for(int a_j = 0; a_j < n; a_j++)
       {
          scanf("%d",&a[a_i][a_j]);
              if (a_i==a_j)
                c=c+a[a_i][a_i] ;
       }
    }
                  for(i=0;i<n;i++)
                  {
                      b=b+a[i][n-1-i];  
                  }

    
     printf("%d", abs(c-b) ) ;

}
