#include "firstNPrime_Instr.c"
#include <stdbool.h>
#include <stdio.h>

int main()
{
	int N = 10;

	
	for (int i = 1; i <= N; i++) {

		
		if (isPrime(i)) {
			printf("%d ", i);
		}
	}
	return 0;
}
