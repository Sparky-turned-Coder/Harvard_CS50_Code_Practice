#include <stdio.h>
#include <cs50.h>

// This was done on 11/04/2025. Just a refresher. All of this was done from memory. I referenced nothing.

int pyramid_height(void);
void print_bricks(int bricks);
void print_spaces(int spaces);

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
        print_bricks(bricks - 1);
        printf("\n");
    }
}

int pyramid_height(void)
{
    int n;
    do
    {
        n = get_int("Enter a number between 1 and 20: ");
    } while (n < 0 || n > 20);
    return n;
}

void print_bricks(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
}

void print_spaces(int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
}