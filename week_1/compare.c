#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Enter a number: ");
    int y = get_int("Enter a number: ");

    if (x > y)
    {
        printf("%i is greater than %i\n", x, y);
    }
}