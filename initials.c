#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string name=GetString();
    if (name[0] != ' ')
    {
        // I had to google how capitalize XD
        printf("%c", toupper(name[0]));
        for (int i = 0, n = strlen(name); i <= n; i++)
        {
            if (name[i] == ' ')
                printf("%c", toupper(name[i + 1]));
        }
        printf("\n");
    }
}
/*
int main(int argc, string argv[])
{
    for (int i = 0; i < argc; i++)
    {
    printf("hello %s\n ", argv[i]);
    }
}
*/