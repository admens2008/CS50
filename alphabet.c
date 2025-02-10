#include <stdio.h>

int main() 
{
    // Print unique two-letter combinations of the alphabet
    char alpha, alpha2;
    
    for (alpha = 'a'; alpha <= 'y'; alpha++) // 'y' to avoid 'zz'
    {
        for (alpha2 = alpha + 1; alpha2 <= 'z'; alpha2++) // Start from alpha + 1
        {
            printf("%c%c ", alpha, alpha2); // Print pair without separate prints
        }
    }
    
    printf("\n");
    return 0;
}