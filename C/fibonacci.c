#include <stdio.h>


void fib(void)
{
	unsigned long int a, b, c;
	a = 1;
	b = 2;
	c = a + b;
	int i;
	
	printf("%lu, %lu, %lu, ",a,b,c);
	for(i = 1; i<=96; i++)
	{
		a = b;
		b = c;
		c = a + b;
		if (i < 96)
		{
			printf("%lu, ",c);
		}
		else
		{
			printf("%lu",c);
		}
	}
}


int main(void)
{
	fib();
	return (0);
}
