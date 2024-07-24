#include<stdio.h>

sumOfSeries(int n){
        int num=1,sum =0;
        do{ 
       
        printf("num : %d\t",num);
        sum+=num;
        printf("sum :%d\t\n",sum);
         num = num*10 +1;
        n--;
        }while(n>0);
        printf("Total Sum : %d", sum);
}