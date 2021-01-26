#include <stdio.h>
#include <cs50.h>
#include <math.h>

//  Function we want to make, which will take in the values for the three sides.
int is_valid_triangle(int s[]);

int main(void)
{
    // Initalize array with name sides and size 3

    int sides[3];

    // Ask user for the length of the sides. i the counter for the index of array and j for the side # to be displayed in printf.

    for (int i = 0, j = 1; i < 3; i++, j++)
    {
        // Asking length of each side #.

        sides[i] = get_int("Please enter the length of side %i : ", j);
    }

    // If the function returns 0 we will treat it as false and invalid triangle
    if (is_valid_triangle(sides) == 0)
    {
        printf("Sorry this is an invalid trinagle.\n");
    }

    // Other wise we will accept the triangle is correct and let user know.
    else
    {
        printf("The triangle given is valid.\n");
    }
}

int is_valid_triangle(int s[])
{
    // If any one side greater than the sum of the other two sides, than return 0, which will be used as a false.

    if (s[0] >= (s[1] + s[2]) || s[1] >= (s[0] + s[2]) || s[2] >= (s[0] + s[1]) )
    {
        return 0;
    }

    // If not we will return a 1 which will be true.

    else
    {
        return 1;
    }
}