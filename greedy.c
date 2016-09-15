#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int const kVALUE_QUARTER = 25;
    int const kVALUE_DIME = 10;
    int const kVALUE_NICKEL = 5;
    int const kVALUE_PENNY = 1;

    float userInput = -1.0;
    int balance = 0;
    int coinCount = 0;

    do {
        printf("how much do you owe?: ");
        userInput = GetFloat();
    } while (userInput < 0);

    balance = (int)(userInput * 100.0);

    // number of quarters:
    coinCount += balance / kVALUE_QUARTER;
    balance %= kVALUE_QUARTER;

    // number of dimes:
    coinCount += balance / kVALUE_DIME;
    balance %= kVALUE_DIME;

    // number of nickels:
    coinCount += balance / kVALUE_NICKEL;
    balance %= kVALUE_NICKEL;

    // number of pennies:
    coinCount += balance / kVALUE_PENNY;
    balance %= kVALUE_PENNY;

    printf("# of coins: %i\n", count);
    printf("balance after coins paid: %i\n", balance);
}
