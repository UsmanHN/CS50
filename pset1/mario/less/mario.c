#include <stdio.h>
#include <cs50.h>

/*
    CS50 - Pset1:
    An implementation of a half-pyramid from Super Mario Bros in C.
*/

int main(void)
{
    // Initialize an integer for the height of the pyramid
    int height = 0;

    // Prompt user for valid input
    do
    {
        height = get_int("Enter height(a number between 0 and 23): ");
    }
    while (height < 0 || height > 23);

    // A loop to iterate through each row of the pyramid given the ´height´ value
    for (int i = 0; i < height; i++)
    {
        // Print the right amount of white-space for each row
        for (int j = i; j < height - 1; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < i + 2; k++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}