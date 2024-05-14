// declaracion de bibliotecas
#include <stdio.h>
#include <time.h>
#define MAX 40

// declaracion de funciones
long FibRec(int n);

// funcion principal
int main()
{
    clock_t t_start, t_final;
    printf("n,t\n");

    for (int i = 0; i <= MAX; i++){
        t_start = clock();
        FibRec(i);
        t_final = clock();
        printf("%d,%f\n", i, (double)(t_final - t_start) / CLOCKS_PER_SEC);
    }

    return 0;
}

// funcion de fibonacci recursiva
long FibRec(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return FibRec(n - 1) + FibRec(n - 2);
}