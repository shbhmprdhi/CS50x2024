// https://cs50.harvard.edu/x/2024/psets/1/mario/more/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Declare height variable
    int height;

    // Get user input
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Outer loop / Switch to the next line of the pyramid after printing the spaces and blocks
    for (int i = 0; i < height; i++)
    {
        // set parameters forthe columns to print
        for (int j = 0; j < height + i + 3; j++)
        {
            if (j == height || j == height + 1 || i + j < height - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
