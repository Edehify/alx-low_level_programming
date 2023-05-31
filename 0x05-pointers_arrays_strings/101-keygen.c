#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    int sum;
    char c;

    srand(time(NULL));
    while (sum < 2772 - 122)
    {
        c = rand() % 94 + 33;
        putchar(c);
        sum += c;
    }
    putchar(2772 - sum);
    return (0);
}
