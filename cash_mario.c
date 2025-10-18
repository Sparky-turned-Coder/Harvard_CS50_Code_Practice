#include <cs50.h>
#include <stdio.h>

void print_bricks(int bricks);
void print_bricks2(int bricks);
void print_spaces(int spaces);
int pyramid_height(void);
int change_owed(void);

int main(void)
{
    int height = pyramid_height();
    int spaces = height - 1;
    int bricks = height - spaces;

    for (int i = 0; i < height; i++)
    {
        print_spaces(spaces--);
        print_bricks(bricks++);
        printf("  ");
        print_bricks2(i + 1);
    }

    int change = change_owed();                            // User tells us what they're owed
    int quarters = change / 25;                            // tells us how many quarters are owed
    int cents = change % 25;                               // stores the 'remainder' of (change divided by 25) to get the remaining cents left over after figuring quarters
    int dimes = cents / 10;                                // tells us how many dimes are owed
    int cents2 = cents % 10;                               // stores the 'remainder' of (cents divided by 10) to get the remaining cents left over after figuring dimes
    int nickels = cents2 / 5;                              // tells us how many nickels are owed
    int cents3 = cents2 % 5;                               // stores the 'remainder' of (cents divided by 5) to get the remaining cents left over after figuring nickles
    int pennies = cents3 * 1;                              // tells us how many pennies are owed by multiplying remaining cents by 1
    int coins_owed = quarters + dimes + nickels + pennies; // adds all four together to store the total amount of coins owed

    printf("Change owed: %i\n", coins_owed); // prints the value stored in 'change_owed'}
}

// Funciton defined below

int change_owed(void)
{
    int n;
    do
    {
        n = get_int("How much change do I owe ya? ");
    } while (n < 0);
    return n;
}

int pyramid_height(void)
{
    int n;
    do
    {
        n = get_int("Next, we'll build a couple pyramids from Mario. Please pick a number between 1 and 8: ");
    } while (n < 1 || n > 8);
    return n;
}

void print_bricks(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
}

void print_bricks2(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}

void print_spaces(int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
}