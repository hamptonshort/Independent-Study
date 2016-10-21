#include <stdio.h>
#include <cs50.h>

int main(void){
    int n;
    int s;
    int d;

    do 
    {
        printf("How tall do you want your pyramid to be?\n");
        n = GetInt();
    }
    while (n <= 0 || n >= 23);
    for (int i = 1; i < n; i++)
    {
        for (s = (n - i); s >= 0; s--)
        {
            printf(" ");
        }
        for (d = 1; d <= (i + 1); d++)
        {
            printf("#");    
        }
        printf("\n");
    }
    return n;
}

    /*switch(n)
    {
        case n<1:
         printf("That number is too small!");
         return 
        case n>23
         printf("That number is too big!");
         return
    }*/
