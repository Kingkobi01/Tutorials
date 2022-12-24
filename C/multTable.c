#include <stdio.h>

int main(void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	int i = 1;

	while(i <= 13)
	{
		int product = num * (int)i;
		printf("%d x %d = %d\n", num, i, product);

		i++;
	}
	return (0);
}
