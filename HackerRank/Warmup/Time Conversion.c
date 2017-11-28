#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
      int hh=0 , mm=0, ss=0 ;
    char ch[2];
    scanf("%d:%d:%d%s",&hh,&mm,&ss,ch);
  
    if (strcmp(ch,"PM")==0 && hh!=12) 
        hh+=12; 
    
    else if (strcmp(ch,"AM")==0 && hh==12) 
        hh=00; 

    printf("%02d:%02d:%02d",hh,mm,ss);  
    
    return 0 ;
}
