#include <stdio.h>
#include <cs50.h>

// Have to instaniate function so C compiler can be aware.

int post(int input[]);

int main(void)
{   // Get user to input array size

    size = get_int("Please give the size of the array");

    // Make array with the size user intended.

    int array[size];

    // Call the function and then post the result.
    post(size[]);
}

// Writing out our function now from above.
int post(int input[])
{
    // Need a seperate variable for us to get the length of the array as it is not determined in the input.
    int length = sizeof(input);

    // Run the for loop to print out and assign values for the index value to match the value inside of the array.
    for (int i = 0; i < length; i++)
    {
        i = input[i];

        printf("Element %i of the array is %i\n", i, input[i]);

    }
}