#include <stdio.h>
#include <cs50.h>

void print_row(int bricks);

int main(void)
{
    int height = get_int("Pick a number: ");

    for (int i = 0; i < height; i++)
    {
        print_row(i + 1);
    }
}

void print_row(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}