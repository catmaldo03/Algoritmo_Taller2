#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 50
#define Calculo 100
void FastRecFib(int n, long int *prev, long int *curr);

int main()
{
    // declaracion de variables de tiempo
    clock_t t_start, t_final;
    double segundos, promedio = 0;
    long int Fib[N];
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < Calculo; j++)
        {
            // inicia la medicion de tiempo
            t_start = clock();
            if (i == 0)
                Fib[i] = 0;
            else if (i == 1)
                Fib[i] = 1;
            else
                FastRecFib(i, &Fib[i - 1], &Fib[i]);
            t_final = clock();
            // calcula los segundos
            segundos = (double)(t_final - t_start) / CLOCKS_PER_SEC;
            // los guarda en la variable promedio
            promedio += segundos;
        }
        promedio /= Calculo;

        // indica el puesto de la secuencia, y el tiempo
        // printf("%d %Lf\n", i + 1, promedio);

        // indica el puesto de la secuencia, el resultado de esta, y el promedio
        printf("%d %ld %f\n", i + 1, Fib[i], promedio);
        //  printf("fib: %d ---- t: %f\n", a, promedio);

        //   se reinician los valores
        promedio = 0;
    }
    return 0;
}
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
