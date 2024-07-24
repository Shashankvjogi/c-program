#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,dig,count=0, temp, rem;
    printf("Enter the Number: ");
    scanf("%d", &num);
    printf("\n Enter the digit to check number of occurences: ");
    scanf("%d", &dig);
    temp = num;

    while(num > 0){
        rem = num % 10;
        if(rem == dig) count++;
        num = num / 10;
    }
    printf("%d repeats %d times in the nuumber %d", dig, count, temp);
        return 0;
}
