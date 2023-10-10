#include <stdio.h>
/**
 * main - Entry point
 * by ramzy
 * Return: Always 0 (success)
*/
int main(void)
{
	/*01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89*/
	int x  = 0;
	int y = x + 1;

	while (x < 10)
	{
		while (y < 10)
		{
			if (x != 0 && y != 1)
			{
				putchar(' ');
			}
			putchar(x + '0');
			putchar(y + '0');
			if (x != 8 && y != 9)
			{
				putchar(',');
			}

			y++;
		}
		x++;
		y++;
	}

	return (0);
}