#include <time.h>

// constant
#define LIMIT 65536

int main(int argc, string argv[])
{
    // checking for the proper number of arguments
    if (argc != 2 && argc != 3)
    {
        printf("Usage: generate n [s]\n");
        return 1;
    }

    // converts the first typed string to an integer
    int n = atoi(argv[1]);

    // if there were 2 arguments given do this as a seed
    if (argc == 3)
    {
        srand48((long int) atoi(argv[2]));
    }
    else
    {
        srand48((long int) time(NULL));
    }

    // for each letter in the sring multiply by random then limit
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}
