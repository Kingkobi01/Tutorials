#include <stdio.h>

int main(void)
{
	int i = 10;
	do{
	int product = (int)i * 9;
	printf("9 x %d = %d\n", i, product);
	i--;
	}
	while(i >= 1);
	return (0);
}
