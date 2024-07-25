#include<stdio.h>

int main(){
    int units,price;
    printf("Enter the number of units\n");
    scanf("%d",&units);
    if(units<=200){
        price = units *5;
    }
    if(units>200 && units<=300){
        price = units *7;
    }
     if(units>300){
        price = units *10;
     }     

     printf("Toatl charge amount of the electricty is : %d\n",price);                          
    return 0;
}