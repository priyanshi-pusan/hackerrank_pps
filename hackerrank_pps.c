#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int amtgiven,billamt;
     int a,b;
     scanf("%d %d",&amtgiven, &billamt);
     a=amtgiven%billamt;
     b=amtgiven/billamt;
    printf("Quotient:%d",b);
    printf("\nRemainder:%d",a);
    return 0;
}