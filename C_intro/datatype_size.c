#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("int range (min is %d, max is %d)\n", INT_MIN, INT_MAX);
    printf("char range (min is %d, max is %d)\n", CHAR_MIN, CHAR_MAX);
    printf("float range (min is %d, max is %d)\n", FLT_MIN, FLT_MAX);
    printf("long range (min is %d, max is %d)\n", LONG_MIN, LONG_MAX);
    printf("double range (min is %d, max is %d)\n", DBL_MIN, DBL_MAX);
    printf("short range (min is %d, max is %d)\n", SHRT_MIN, SHRT_MAX);
}