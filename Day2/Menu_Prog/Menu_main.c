#include<stdio.h>
#include "Menu_Instr.c"

int main(){
    int n1,n2,option;
    printf("Enter two numbers");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("Press below option :\n 1 - Sum\n 2 - Difference\n 3 - Multiplication\n");
    scanf("%d", &option);
    
    switch(option){
        case 1: sum(n1,n2);
        break;

        case 2: diff(n1,n2);
        break;

        case 3: mult(n1,n2);
        break;

      default: break;
    }
    

    return 0;
}