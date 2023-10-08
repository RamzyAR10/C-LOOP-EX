#include <stdio.h>

int main(void)
{
    int grade; //must be grade > 0 && grade <= 100
    

    do
    {
        printf("Enter the grade : ");
        scanf("%d",&grade);
    } while (grade <= 0 || grade > 100);// you must reverse the condation to loop if your condition false and getout if your condition that you reverse it become true 

    printf("your grade is : %d ,thanks you are greate tester (: \n",grade);
    getchar();
    char x = getc(stdin);

    printf("the char is : %c\n",x);

    
    return (0);
}