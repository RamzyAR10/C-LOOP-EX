#include <stdio.h>

int main(void)
{
	//find the power

	/*int num , power;
	int result = 1;
	scanf("%d %d", &num,&power);

	for (int i = 0; i < power ; i++)
	{
		result *= num;
	}

	printf("%d\n",result);*/

	/*********************************************************************************/
	/*int n;

	scanf("%d",&n);

		for ( int i = 1; i <= n; i++)
		{
			for (int x = 1; x <= i ; x++)
			{
				printf("%d",x);
			}
			printf("\n");
		}*/
	/***********************************************************************************/	
	int n;

	scanf("%d",&n);

	for (int i = 1; i <= n; i++)
	{
		for (int x = 1; x <= i; x++)
		{
			printf("%d",i);
		}
		printf("\n");
		
	}
	



	return (0);
}