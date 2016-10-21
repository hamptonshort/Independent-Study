#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    string key = argv[1];
    if (argc != 2)
    {
        printf("Please give me an actual key");
        return 1;
    }
    else
    {
        // make the characters into numbers for easy conversion
        int k = atoi(key) % 26;
        
        // To see if we got a good key
        if (k <= 0)
        {
            printf("That is a bad key. Try again\n");
            return 1;
        }
         // Here is where we get the word to encrypt and check to see if we were given a valid key
        string word = GetString();
        if (word != NULL)
        {
            // Encrypting :D
            for (int i = 0, n = strlen(word); i < n; i++)
            {
                int c = 0;    
        
                // We see if text is upper case or lower case
                // then switch it to the number value and encrypt it
                if (isupper(word[i]))
                {
                   // isupper refers to upper case
                    c = (((int)word[i] - 65 + k) % 26) + 65;
                    printf("%c", (char) c);
                }
                else if (islower(word[i]))
                {
                    // vice-versa with a larger number for the different values
                    c = (((int)word[i] - 97 + k) % 26) + 97;
                    printf("%c", (char) c);
                }
                else
                {
                    printf("%c", word[i]);
                }
                }
            printf("\n");
            return 0;
        }
    }
}