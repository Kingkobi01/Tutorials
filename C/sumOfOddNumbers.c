#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for(i = 1; i < 100; i+=2)
	{
		sum += i;
	}
	printf("Sum: %d",sum);
	return (0);
}
