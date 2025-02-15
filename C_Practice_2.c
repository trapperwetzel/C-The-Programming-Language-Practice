// random c coding to practice using terminal for files



// print out numbers in range of 1-30, and if the number is even, print out the number, and "Even number!" after it.


#include <stdio.h>

int main()
{

    int number;

    for(number = 0; number < 30; number++)
    {
        if(number % 2 == 0)
        {
            printf("%d",number);
            printf("\nEven number!\n");
        }

    }


}