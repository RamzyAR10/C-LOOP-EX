#include <stdio.h>
/**
 * main - Entry point
 * print all low alpha except (e,q)
 * don't use continue
 * Return: Always 0 (success)
*/
int main(void)
{  
	int low_alpha = 97;

	//don't use continue
	while (low_alpha <= 122)
	{
		
		if (low_alpha != 101 && low_alpha != 113)
		{
			putchar(low_alpha);
		}

		low_alpha++;
	}

	//use continue with while
	while (low_alpha <= 122)
	{
		if (low_alpha == 101 || low_alpha == 113)
		{
			low_alpha++;
			continue;
		}
		putchar(low_alpha);
		low_alpha++;
	}

	//use for with continue
	for (; low_alpha <= 122 ; low_alpha ++)
	{
		if (low_alpha == 101 || low_alpha == 113)
		{
			continue;
		}
		putchar(low_alpha);
	}
	
	
	putchar('\n');

	return (0);
}