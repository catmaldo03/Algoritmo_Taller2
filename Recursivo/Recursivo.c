/*
 * @author Catalina Maldonado y Ariel Lopez
 * metodo-Recursivo
 * */

// declaracion de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 45
#define CALC 10

// declaracion de funciones
long long int FibRec(int n);
// funcion principal
int main()
{
    // declaracion de variables de tiempo
    clock_t t_start, t_final;
    double segundos, promedio = 0;
    // declaraciond de otras variables
    int i, j; // calculos es la cantidad de veces que se realiza la secuencia de fibonacci
    long long int a = 0;
    for (i = 0; i <= N; i++)
    {
        for (j = 0; j < CALC; j++)
        {
            // inicia la medicion de tiempo
            t_start = clock();
            a = FibRec(i);
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
        printf("%d %f \n", i, promedio);

        //   se reinician los valores
        promedio = 0;
        // a = 0;
    }

    return 0;
}

// funcion de fibonacci recursiva
long long int FibRec(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
    {
        return (FibRec(n - 1) + FibRec(n - 2));
    }
}