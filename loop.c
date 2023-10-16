#include <stdio.h>

int main()
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d",i);
	}
	putchar('\n');
	/************************************************/
	for (int i = 9; i >= 0; i--)
	{
		printf("%d",i);
	}
	putchar('\n');
	/************************************************/
	int sum;
	for (int i = 0; i < 10; i++)
	{
		sum += i;
	}
	printf("%d\n",sum);
	putchar('\n');
	/*************************************************/
	// table of 3

	int table = 3;
	int result;
	for (int i = 1; i <= 12; i++)
	{
		result = table * i;
		printf("%d x %d = %d\n",i,table,result);
	}
	putchar('\n');
	/***************************************************/
	//print the 5 ---> 2,4,6,8,10 even number


	int num = 5;

	for (int i = 1; i <= num; i++)
	{
		printf("%d, ",i*2);
	}
	
	putchar('\n');
	/*****************************************************/
	//  1
	// 2 3
	// 456
	int sp = 5-1;
	int n = 1;
	for (int i = 1; i <= 4; i++)
	{
		for (int y = sp ; y >= i; y--)
		{
			putchar(' ');
		}
		for (int x = 0; x < i; x++)
		{
			printf("%d",n);

			n++;
		}
	
		putchar('\n');
		putchar('\n');
		
	}
	/*************************************************************/
	// only sum the mulity of 3,5
	int sumx ;
	for (int i = 0; i < 15; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sumx += i;
		}
	}
	printf("%d\n",sumx);
	putchar('\n');
	putchar('\n');
	/************************************************************/
	
	
	return 0;
}