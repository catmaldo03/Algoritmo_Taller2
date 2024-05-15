/*
 * @author Catalina Maldonado y Ariel Lopez
 * metodo-iterativo2-promedio
 * */

// declaracion de bibliotecas
#include <stdio.h>
#include <time.h>
#define N 90      // Numeros de Fib
#define CALC 1000 // Cantidad de veces que se repite el calculo del numero de Fibonacci actual

// declaracion de funciones
unsigned long long iterFib2(int n);

// funcion principal
int main()
{
    FILE *datos;
    // declaracion de variables de tiempo
    clock_t t_start, t_final;
    double segundos, promedio = 0;

    int i, n; // contadores
    datos = fopen("prom.dat", "w");
    // printf("n,t\n"); // Imprimir encabezado
    for (n = 0; n <= N; n++)
    {
        for (i = 0; i < CALC; i++)
        {
            // inicia la medicion de tiempo
            t_start = clock();
            iterFib2(n);
            // termina la medicion de tiempo
            t_final = clock();
            // calcula los segundos
            segundos = (double)(t_final - t_start) / CLOCKS_PER_SEC;
            // los guarda en la variable promedio
            promedio += segundos; // Esto es practicamente una sumatoria de los tiempos
        }
        /*
            Se calcula  el promedio,
            el cual es la cantidad de segundos en total,
            dividido la cantidad de calculos realizados
        */
        promedio /= CALC;

        // indica el numero de Fibonacci, y el tiempo de ejecucion promedio
        printf("%d %f\n", n, promedio);
        fprintf(datos, "%d %f \n", n, promedio);

        promedio = 0;
    }
    fclose(datos);
    return 0;
}

unsigned long long iterFib2(int n)
{
    unsigned long long prev = 1, curr = 0, next;

    for (int i = 1; i <= n; i++)
    {
        next = curr + prev;
        prev = curr;
        curr = next;
    }
    return curr;
}
