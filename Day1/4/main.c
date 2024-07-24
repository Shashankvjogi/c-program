#include <stdio.h>
#include <stdlib.h>

int main()
{
    double celsius;
    printf("Enter the celsius : ");
    scanf("%lf", &celsius);

    double farhenhite = (celsius *9/5)+ 32;
    printf("Conversion of celsius to farhenhite is : %lf", farhenhite);

    return 0;
}
