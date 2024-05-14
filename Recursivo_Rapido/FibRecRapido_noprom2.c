/*
 * @author Catalina Maldonado y Ariel Lopez
 * metodo-Recursivo Rapido
 * */

// declaracion de librerias y define
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 90
#define CALC 100000
#define PRUEBAS 50
void FastRecFib(int n, long long int *prev, long long int *curr);

int main()
{
    // declaracion de variables de tiempo
    clock_t t_start, t_final;
    double segundos, promedio = 0;
    long long int Fib[N];
    int i, j, k;
    for (i = 0; i <= N; i++)
    {
        for (k = 0; k < PRUEBAS; k++)
        {
            for (j = 0; j < CALC; j++)
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
        }
        promedio /= PRUEBAS;

        // indica el puesto de la secuencia, y el tiempo
        printf("%d %f\n", i, promedio);

        //   se reinician los valores
        promedio = 0;
    }
    return 0;
}
void FastRecFib(int n, long long int *prev, long long int *curr)
{
    long long int hprv, hcur, next;
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