#include <stdio.h>
#include <cs50.h>

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
    }

    for (int i = 0; i < height; i++)
    {
        print_bricks(i + 1);
    }
}

// Functions defined below

void print_bricks(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#"); // print a hash
    }
    printf("\n");
}

void print_spaces(int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" "); // print an empty space
    }
}

int pyramid_height(void)
{
    int n;
    do
    {
        n = get_int("Pick a number betwixt 1 and 8: "); // get input from the user to determine pyramid height
    } while (n < 1 || n > 8);
    return n;
}