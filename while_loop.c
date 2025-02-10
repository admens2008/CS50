#include <stdio.h>

int main() {
    // using while_loop to print even numbers
   int x = 0;
   while (x < 20)
   {
       if (x % 2 == 0)
       {
           printf("%d\n", x);
       }
       x++;
   }

    return 0;
}