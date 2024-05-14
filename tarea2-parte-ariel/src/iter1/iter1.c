/*
 * @author Catalina Maldonado y Ariel Lopez
 * metodo-iterativo1
 * */

// declaracion de bibliotecas
#include <stdio.h>
#include <time.h>
#define N 90 // Numeros de Fib
#define CALC 100000
#define PRUEBAS 50

// declaracion de funciones
unsigned long long iterFib(int n);

// funcion principal
int main()
{

    clock_t t_start, t_final; // Variables de tiempo
    double segundos, promedio = 0;
    // printf("n,t\n"); // Imprimir encabezado

    for (int i = 0; i <= N; i++)
    {
        for (int k = 0; k < PRUEBAS; k++)
        {
            for (int j = 0; j < CALC; j++)
            {
                t_start = clock();
                iterFib(i);
                t_final = clock();
                segundos = (double)(t_final - t_start) / CLOCKS_PER_SEC;
                // los guarda en la variable promedio
                promedio += segundos;
            }
        }
        promedio /= PRUEBAS;
        printf("%d %f\n", i, promedio);
        promedio = 0;
    }

    return 0;
}

unsigned long long iterFib(int n)
{
    unsigned long fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    return fib[n];
}
