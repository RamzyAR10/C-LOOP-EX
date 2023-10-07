#include <stdio.h>

int main(void)
{
    //when you do this program with (while) you must double the scanf 
   /* int price , total_price = 0; 

    printf("Enter the price : ");
    scanf("%d",&price);

    while (price != 0)
    {
        total_price += price;
        printf("Enter the price : ");
        scanf("%d",&price);
    }
    
    printf("the total price is : %d\n",total_price);*/

    //************************************************************

    //when you do this program with (do ... while) you must single the scanf

    int price , total_price = 0;

    do
    {
        printf("Enter the price : ");
        scanf("%d",&price);
        total_price += price;

    } while (price != 0);

    printf("the total price is : %d\n",total_price);

    return (0);\

    //because of the difference between the (while) and (do ... while)
    //the (do ... while) will execute the code at least one time
    //but the (while) will not execute the code if the condition is false
    // you should in this example use (do ... while) because you want to execute the code at least one time

}