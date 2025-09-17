#include <stdio.h>

// int main(void)
// {
//     printf("What is your name? ");
//     scanf("What is your name? ");
//     printf("Hello, answer\n");
// }

int main(void)
// Here we are using scanf to get the user's input and then printing it back to them.
{
    char str[10];
    printf("What is your name? ");
    scanf("%s", str);
    printf("Hello, %s\n", str);
}
