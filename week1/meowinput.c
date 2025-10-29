// Include the CS50 library for get_int() and other functions
#include <cs50.h>
// Include the standard input/output library for printf()
#include <stdio.h>

// Function prototype (lets the compiler know meow() exists below)
void meow(int n);

int main(void)
{
    int n;  // Declare a variable to store the number of times to meow
    // If we did not define n above, it would not be accessible outside the braces
    // of the do-while loop — it would only exist inside that block.

    // Keep asking the user for a positive number
    do
    {
        n = get_int("Number: ");  // Prompt the user for an integer
    }
    while (n < 1);  // Repeat if the user enters a number less than 1

    // Call the meow function, passing in the user's input
    meow(n);
}

// Define the meow function
// This function prints "meow" n times
void meow(int n)
{
    // Repeat the loop n times
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");  // Print "meow" followed by a newline
    }
}
