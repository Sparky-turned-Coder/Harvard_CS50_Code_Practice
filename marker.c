#include <cs50.h>
#include <stdio.h>

void print_bricks(int bricks);
void print_bricks2(int bricks);
void print_bricks3(int bricks);
void print_bricks4(int bricks);
void print_spaces(int spaces);
void print_spaces2(int spaces);
int pyramid_height(void);

int main(void)
{

    // We made a diamond here.

    int height = pyramid_height();
    int spaces = height - 1;
    int bricks = height - spaces;

    printf("\n");

    for (int i = 0; i < height; i++)
    {
        print_spaces(spaces--);
        print_bricks(bricks++);
        print_bricks2(i + 1);
    }

    int bricks3 = height - 1;
    int spaces2 = height - bricks3;

    for (int j = 0; j < height; j++)
    {
        print_spaces2(spaces2++);
        print_bricks3(bricks3--);
        print_bricks4(bricks3 + 1);
    }
}

// Functions

int pyramid_height(void)
{
    int n;
    do
    {
        n = get_int("Pick a number between 1 and 20 por favor: ");
    } while (n < 1 || n > 20);
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

void print_bricks3(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
}

void print_bricks4(int bricks)
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

void print_spaces2(int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
}