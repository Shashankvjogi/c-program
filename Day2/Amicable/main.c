#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num1=220,num2=284,res_num1=0, res_num2=0;


    for(int i=1;i<num1;i++){
        if(num1 % i == 0){
            res_num1+= i;
        }
    }

     for(int i=1;i<num2;i++){
        if(num2 % i == 0){
            res_num2 += i;
        }

    }


    if((num1==res_num2) &&(num2==res_num1)){
         printf("Entered numbers are  amicable");
    }
    else{
     printf("Entered numbers are not amicable");
    }

    return 0;
}
