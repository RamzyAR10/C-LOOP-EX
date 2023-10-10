#include <stdio.h>

int main(void)
{
    // i cent double it through th 30 days
    int day;
    int tot_cent = 1; // start with 1 cent

    for (day = 1; day <= 30; day++)
    {
        if (day > 1) // double the amount starting from the second day
        {
            tot_cent *= 2;
        }
    }
    
    printf("%d\n", tot_cent/100); // print the total amount in dollars

    return 0;
}