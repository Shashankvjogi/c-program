#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter the year : ");
    scanf("%d", &number);


    printf("2^%d is %d",number, 1 << number);
    return 0;
}
