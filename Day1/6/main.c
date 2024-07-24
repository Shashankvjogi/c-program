#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter the year : ");
    scanf("%d", &number);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
         printf("Entered year is leap year ");
    }
    else{
        printf("Entered year is not leap year ");
    }
    return 0;
}
