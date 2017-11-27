#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double mealcost ;
    int tippercent;
    int taxpercent;
    unsigned int total ;
    double a , b;

        scanf ("%lf", &mealcost);
        scanf ("%d", &tippercent);
        scanf ("%d", &taxpercent);                                                       
                                                                                            
    a = tippercent*mealcost*0.01;
    b = mealcost*taxpercent*0.01;

    total = a+b+mealcost+0.5;

    printf("The total meal cost is %.0d dollars.", total);

}
