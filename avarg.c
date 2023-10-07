#include <stdio.h>
/**
 * write a programe that take a grades from user and stop 
 * take it when the input was -1
 * and print the avrage
 * 
*/
int main(void)
{
    int grade = 0;
    int sum_grads = 0;
    int num_grads = 0;
    float avrage;
    printf("Please Enter the grades \n");
    while(grade != -1) // i don't know how many time should i loop becoase i used (while or do ...while , don't use for )
    {     
        sum_grads += grade;
        num_grads ++;
        scanf("%d",&grade);
        
    }
    if (num_grads != 0)
    {
        avrage = sum_grads/(float)num_grads;
        printf(" the avrage of your grads is : %f\n",avrage);
    }
    else
    {
        printf("there is no grade entared !!\n");
    }

    return (0);
}