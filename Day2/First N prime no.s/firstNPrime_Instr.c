#include<stdio.h>
#include <stdbool.h> 

bool isPrime(int n)
{
	
	if (n == 1 || n == 0)
		return false;

	
	for (int i = 2; i <= n / 2; i++) {

		
		if (n % i == 0)
			return false;
	}
	return true;
}