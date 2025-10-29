#include <cs50.h> //Have to run this to use get_string
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer); //the second comma is used to seprate the first input from the second
}

