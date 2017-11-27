#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int factorial(int n) {
    int i,h;
    if (n==1)
    { h= n ;
        return h;}
    else 
    { h = n*factorial(n-1);
        return h ;}
}

int main() {
    int n; 
    scanf("%i", &n);
    int result = factorial(n);
    printf("%d\n", result);
    return 0;
}
