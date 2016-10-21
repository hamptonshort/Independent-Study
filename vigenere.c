#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void cipher(int key, int text);

int main(int argc, char* argv[])
{
    // error checking
    if (argc != 2)
    {
        printf("Too many or too few arguments\n");
        return 1;
    }
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isalpha(argv[1][i]) == 0)
        {
            printf("dude I need letters not numbers\n");
            return 1;
        }
    }
    // keep the values
    char* key = argv[1];
    int keylen = strlen(key);
    // now we get what we want to cipher
    char* text = GetString();
    // we needed to set a variable for counting
    int j = 0;
    
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // make sure we a letter not a number
        if (isalpha(text[i]))
        {
            // check the case of the key
            if (isupper(key[j % keylen]))
            {
                int k = key[j % keylen] - 65;
                cipher(k, text[i]);
            }
        else
            {
                int k = key[j % keylen] - 97;
                cipher(k, text[i]);
            }
            j++;
        }
        
        // if its a number we just print it
        else
            printf("%c", text[i]);
    }
    printf("\n");
}

void cipher(int key, int text)
{
    // check if text is uppercase
    if (isupper(text))
    {
        // uppercase
        int result = (text - 65 + key) % 26 + 65;
        printf("%c", result);
    }
    else
    {
        // lowecase
        int result = (text - 97 + key) % 26 + 97;
        printf("%c", result);
    }
}