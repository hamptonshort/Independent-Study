#include <stdio.h>
#include <cs50.h>
int main (void)
{
    printf("How many minutes do you shower?\n") ;
    int x = GetInt();
    printf("You waste %.1f waterbottles a day\n", x * 1.5 * 128 / 16) ;
    
}