#include <stdio.h>

int add_two(int x, int y);

int main()
{
    int result = add_two(4, 8);
    printf("Answer is %d\n", result);
    return(0);
}

int add_two(int x, int y)
{
    int result = x + y;
    return(result);
}