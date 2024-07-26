#include<stdio.h>
#include "bintodec_instr.c"

int main(){
    int bin,dec,opt;
    printf("Select the below option :\n 1 - Binary to Decimal\n 2 - Decimal to Binary \n");
    scanf("%d",&opt);
    if(opt == 1){
    printf("Enter the binary to convert it to decimal :");
    scanf("%d",&bin);
    dec = bintodec(bin);
    printf("conversion of binary number %d to decimal is %d : ",bin,dec);
    }
    else if(opt == 2){
    printf("Enter the decimal to convert it to binary :");
    scanf("%d",&dec);
    bin = dectobin(dec);
    printf("conversion of decimal number %d to binary is %d : ",dec,bin);
    }
     return 0;
}