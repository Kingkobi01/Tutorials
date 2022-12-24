#include <stdio.h>

int main(void)
{
	int num;
	printf("Enter any number from 1-10: ");
	
	scanf("%d", &num);
	
	int i = 1;
	do{
		int product = i * num;
		printf("%d x %d = %d\n", num, i, product);
		i++;
	}
	while(i <= 12);
	return (0);
}
