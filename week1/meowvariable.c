#include <cs50.h>
#include <stdio.h>

// FUNCTION PROTOTYPE: This tells the compiler that the 'meow' function exists
// before 'main' tries to call it. It specifies:
// 1. Returns nothing (void)
// 2. Takes no arguments (void)
void meow(void);

void meow(void) // Corrected: void means the function takes NO inputs and returns NO value
{
    printf("meow\n"); // <-- FIX 1: Added semicolon
}

int main(void)
{
    for(int i = 0; i < 3; i++) // <-- FIX 2: Added variable name 'i'
    {
        meow();
    }
}
