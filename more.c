#include <cs50.h>
#include <stdio.h>

// This will be our 'mario-more' file. Back-to-back pyramids.

void print_bricks(int bricks);
void print_bricks2(int bricks);
void print_spaces(int spaces);
int pyramid_height(void);

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
}

// Functions defined below

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

int pyramid_height(void)
{
    int n;
    do
    {
        n = get_int("Select a number betwixt 1 and 8: ");
    } while (n < 1 || n > 8);
    return n;
}
