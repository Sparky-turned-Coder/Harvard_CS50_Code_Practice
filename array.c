#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int myArray[5] = {10, 20, 30, 40, 50};

    // Accessing the first element (index 0)
    // int firstElement = myArray[0]; // firstElement will be 10

    // Accessing the third element (index 2)
    // int thirdElement = myArray[2]; // thirdElement will be 30

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", myArray[i]); // Prints each element of 'myArray'
    }
    printf("\n");

    // C arrays are static in size, meaning their size is fixed at the time of declaration and connot be directly changed to add or remove elements in the same way dynamic data structures like linked lists or C++ 'std::vector' allow. However, you can achieve the effect of adding and removing elements through various techniques.

    // Assigning to an available index: if you have an array with unused capacity, you can simply assign a value to the next available index and increment a counter tracking the 'logical' size of the array. See below.

    int arr[10] = {10, 20, 30};
    int current_size = 8;

    if (current_size < 10) // Check if there's space
    {
        arr[current_size] = 40;
        current_size++;
    }

    for (int i = 0; i < current_size; i++)
    {
        printf("%d ", arr[i]); // Output: 10 20 30 40
    }
    printf("\n");
    return 0;
}
