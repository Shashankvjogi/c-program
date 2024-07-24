#include <stdio.h>
void check_palindrome(int num){
    int temp = num,rem, rev=0;
    while(num>0){
        rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
    }
   if(temp == rev){
        printf( "%d is palindrome", temp);
   }
   else{
        printf( "%d is  not palindrome", temp);
   }
}