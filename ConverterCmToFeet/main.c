#include "conversion.h"

#include <stdio.h>
#include <stdio.h>



int main() { 

    int cm;
    int isFeet;
    int remInches;

    printf("Enter cm:");
    scanf("%d", &cm);
    
    metricToImperial(cm, &isFeet,&remInches);

    printf("is feet:%d\t\t\n", isFeet);
    printf("is inches:%d\t\t\n", remInches);

    return 0;

}
