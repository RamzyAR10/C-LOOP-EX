#include <stdio.h>

int main(void)
{
  /*int num ;
  scanf("%d",&num);
  int x = 0;
  while (x < num)
  {
    putchar('*');
    x++;
  }
  putchar('\n');*/

  int num , pow;

  scanf("%d %d", &num,&pow);  
  int result = num;
  int x = 0;
  while(x < pow -1) 
  {
    result *= num;
    x++;
  }

  printf("%d\n",result);

  return (0);
}