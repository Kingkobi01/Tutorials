 #include <stdio.h>

void _putchar(int n)
{
	unsigned i,k,j;
	if (n < 0)
	{
		putchar('-');
		i = -n;
	}
	else
	{
		i = n;
	}
	
	j = 1;
	k = i;

	while (i/j > 9)
	{
		j *= 10;
	}
	
	for (; j >= 1; j /= 10)
	{
		putchar((i / j) + '0');
		i %= j;
	}
}


int main(void)
{
	_putchar(0);
	return (0);
}
