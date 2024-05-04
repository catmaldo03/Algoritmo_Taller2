#include <stdio.h>
int main()
{
    int n = 25, i;
    int array[n];
    for (i = 0; i < n; i++)
    {
        if (i == 0)
            array[i] = 0;
        else if (i == 1)
            array[i] = 1;
        else
            array[i] = array[i - 1] + array[i - 2];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d --- %d  \n", i + 1, array[i]);
    }
    return 0;
}