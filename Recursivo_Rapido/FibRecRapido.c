#include <stdio.h>
#include <stdlib.h>

void FastRecFib(int n, long int *prev, long int *curr)
{
    long int hprv, hcur, next;
    if (n == 1)
    {
        *curr = 1;
        *prev = 0;
        return;
    }

    int m = n / 2;
    FastRecFib(m, &hprv, &hcur);
    *prev = (hprv * hprv) + (hcur * hcur);
    *curr = hcur * (2 * hprv + hcur);
    next = *prev + *curr;
    if (n % 2 == 1)
    {
        *prev = *curr;
        *curr = next;
    }
}

int main()
{
    int n = 10;
    // long int a = 0;
    // long int b = 1;
    long int Fib[n];
    // FastRecFib(n, &a, &b);
    // printf(" %ld , %ld \n", a, b);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            Fib[i] = 0;
        else if (i == 1)
            Fib[i] = 1;
        else
            FastRecFib(i, &Fib[i - 1], &Fib[i]);
    }
    for (int i = 0; i < n; i++)
        printf(" %ld ", Fib[i]);
    return 0;
}