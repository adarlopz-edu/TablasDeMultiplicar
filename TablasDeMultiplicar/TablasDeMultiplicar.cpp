#include <conio.h>
#include <stdio.h>
int main()
{
	int x = 0, y = 0, z = 0, m = 0;
	for (x = 1; x <= 10; x++)
	{
		for (y = 1; y <= 12; y++)
		{
			z = x * y;
			printf("%i * %i = %i\t", y, x, z);
		}
		printf("\n");
	}
}