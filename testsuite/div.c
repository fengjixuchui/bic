#include <stdio.h>

int main()
{
    int a = 1024;
    int b = 24;
    unsigned int c = 0;

    printf("%d\n", a / 3587);
    printf("%d\n", 234587 / 18);
    printf("%d\n", 11212 / b);
    printf("%d\n", a / b);
    printf("%u\n", c / a);

    return 0;
}
