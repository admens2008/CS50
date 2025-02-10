#include <stdio.h>
// creating the sum function 
int sum(int x, int y);

int main(void)
{
    int x, y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    sum(x, y);
}



int sum(int x, int y) {

    int sum;
    sum = x + y;
    printf("%d + %d = %d\n", x, y, sum);
    return 0;
}