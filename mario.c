#include <stdio.h>
#include <cs50.h>

// void print_bricks(int bricks);
//  void remove_bricks(int bricks);
// int pyramid_height(void);

int main(void)
{
    const int height = 8; // After 'initialization', this variable cannot be changed.
    int bricks = 4;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < bricks; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// int height = pyramid_height();
// // int height2 = 3;
// for (int i = 0; i < 1; i++)
// {
//     for (int j = 0; j < height; j++)
//     {
//         print_bricks(j + 1);
//     }
// }

// for (int i = 0; i < height; i++)0..

// {
//     print_bricks(i);
// }

// printf("\n");

// for (int i = 0; i < height; i++)
// {
//     print_row(height);
//     // for (int j = 0; j < height; j++)
//     // {
//     //     remove_bricks(j);
//     // }
//     printf("\n");
// }

// printf("\n");

// printf("########\r       \n");
// printf("########\r      \n");
// printf("########\r     \n");
// printf("########\r    \n");
// printf("########\r   \n");
// printf("########\r  \n");
// printf("########\r \n");
// printf("########\n");

// Functions defined below

// void remove_bricks(int bricks)
// {
//     for (int i = 0; i < bricks; i++)
//     {
//         printf("\r ");
//     }
//     // printf("\n");
// }

// void print_bricks(int bricks)
// {
//     for (int i = 0; i < bricks; i++)
//     {
//         printf("#");
//     }
//     printf("\n");
// }

// int pyramid_height(void) // Get user input on the height of the pyramid
// {
//     int n;
//     do
//     {
//         n = get_int("Pick a number between 1 and 8: ");
//     } while (n <= 0 || n > 8);
//     return n;
// }

// Below is another breakdown of a loop nested within a loop

// int i, j;

//     // Outer loop for rows
//     for (i = 1; i <= 3; i++)
//     {
//         printf("Outer loop iteration: %d\n", i);

//         // Inner loop for columns
//         for (j = 1; j <= 2; j++)
//         {
//             printf("  Inner loop iteration: %d\n", j);
//         }
//     }
//     return 0;