#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, rem,rev=0,temp;
    printf("Enter number: \n");
    scanf("%d",&num);
    temp = num;

     while(num > 0){
        rem = num % 10;
        rev =rev*10+ rem;
        num = num/10;
    }

    printf("Reverse of %d is: %d",temp, rev);
    return 0;
}
