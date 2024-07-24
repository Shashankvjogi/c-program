#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);

    if(number % 2 == 0){
         printf("Entered number is even ");
    }else{
        printf("Entered number is odd ");
    }
    return 0;
}
