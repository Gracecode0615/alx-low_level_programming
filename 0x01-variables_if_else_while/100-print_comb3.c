#include <stdio.h>

/**
 * main - main function
 * this is task ten
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	for (i = '0'; i <= '9'; j++)
	{
		for (j = '0'; j <= '9'; j++)
		{
		if (i < j)
		{
			putchar(i);
			putchar(j);
			if (i != '8' || (i == '8' && j != '9'))
			{
				putchar(',');
				putchar(' ');
			}

			}
		}
	}
	putchar('\n');
	return (0);
}
