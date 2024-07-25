#include<stdio.h>
#include<math.h>

int main(){
    int bin,dec=0,rem,count=0;
    printf("Enter the Binary number :");
    scanf("%d", &bin);
    while(bin>0){
        rem = bin % 10;
        dec += rem * pow(2,count);
        count++;
        bin /= 10;
    }
    printf("%d",dec);
    return 0;
}