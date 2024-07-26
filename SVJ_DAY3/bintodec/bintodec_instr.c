#include<stdio.h>
#include<math.h>


int bintodec(int bin){
    int rem,count = 0,dec=0;
    while(bin >0 ){
        rem = bin % 10;
        dec += rem*pow(2,count);
        count++;
        bin /= 10;
    }
    return dec;
}


int dectobin(int dec){
    int rem,val=0,count=1;
    while(dec>0){
        rem = dec % 2;
        val = val + rem*count;
        count *= 10;
        dec /= 2;
    }
    return val;
}