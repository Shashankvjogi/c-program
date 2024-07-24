#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, rem,sum=0,temp;
    printf("Enter 5 digit number: \n");
    scanf("%d",&num);
    temp = num;
    while(num > 0){
        rem = num % 10;
        sum += rem;
        num = num/10;
    }
    printf("Sum of %d is: %d",temp, sum);
    return 0;
}
