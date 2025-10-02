#include <cs50.h> // *** No access to this locally (without a bunch of extra work)
#include <stdio.h>

// In this exercise, we have created 2 functions for reuse whenever we want to.

// *** This was done online, in our codespace, where we actually have access to the CS50 LIBRARY ***

int get_positive_int(
    void); // This is a function prototype, which informs the compiler that this function will be defined later.
void meow(
    int n); // This is a function prototype, which informs the compiler that this function will be defined later.

int main(void)
{
    int times = get_positive_int();
    meow(times);
}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Number: ");
    } while (n < 1);
    return n;
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}