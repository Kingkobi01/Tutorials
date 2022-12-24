#include <stdio.h>

int factorial(int n);

int main(void)
{
	int num;
	printf("Number: ");
	scanf("%d", &num);
	
	printf("Factorial: %d\n", factorial(num));

	return(0);
}


int factorial(int n)
{
		return (n <= 1)? 1 : (n * factorial(n-1));
}
