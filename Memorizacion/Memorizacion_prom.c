/*
 * @author Catalina Maldonado y Ariel Lopez
 * metodo-Memorizacion
 * */

// declaracion de librerias y define
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 90
#define CALC 100000

// declaracion de funciones
long long int MemFib(int n, long long int F[]);

// funcion principal
int main()
{
    // declaracion de variables de tiempo
    clock_t t_start, t_final;
    double segundos, promedio = 0;
    // declaraciond de otras variables
    int i, k, j;
    long long int F[N], resultado;
    for (i = 0; i <= N; i++)
    {

        for (k = 0; k < CALC; k++)
        {
            for (j = 0; j <= N; j++)
            {
                F[j] = -1;
            }

            // inicia la medicion de tiempo
            t_start = clock();

            resultado = MemFib(i, F);
            // termina la medicion de tiempo
            t_final = clock();
            // calcula los segundos
            segundos = (double)(t_final - t_start) / CLOCKS_PER_SEC;
            // los guarda en la variable promedio
            promedio += segundos;
        }
        // Se calcula  el promedio que es la cantidad de segundos, divido los calculos
        promedio /= CALC;

        // indica el puesto de la secuencia, y el tiempo
        printf("%d %f\n", i, promedio);

        //   se reinician los valores
        promedio = 0;
        resultado = 0;
    }
    return 0;
}
long long int MemFib(int n, long long int F[])
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (F[n] == -1)
    {
        F[n] = MemFib(n - 1, F) + MemFib(n - 2, F);
    }
    return F[n];
}