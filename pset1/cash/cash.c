#include <stdio.h>
#include <math.h>
#include <cs50.h>

/*
    CS50 - Pset1:
    An implementation of the greedy algorithm in C.
*/

int main(void)
{
    float change;
    // Initialize counter for amount of coins used
    int counter = 0;

    // Prompt user for a valid input
    do
    {
        change = get_float("Enter amount of change owed: ");
    }
    while (change < 0);

    // Convert dollars to cents & float to integer
    int roundedChange = round(change * 100);

    // Add amount of coins divisible to the counter & return the remainder
    counter += roundedChange / 25;
    roundedChange %= 25;

    counter += roundedChange / 10;
    roundedChange %= 10;

    counter += roundedChange / 5;
    roundedChange %= 5;

    counter += roundedChange;

    printf("Amount of coins used: %i \n", counter);

    return 0;
}