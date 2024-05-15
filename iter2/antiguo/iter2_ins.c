/*
 * @author Catalina Maldonado y Ariel Lopez
 * metodo-iterativo2
 * */

// declaracion de bibliotecas
#include <stdio.h>
#include <time.h>
#define N 90 // Numeros de Fib
#define CALC 100000

// declaracion de funciones
unsigned long long iterFib2(int n);

// funcion principal
int main()
{

    clock_t t_start, t_final; // Variables de tiempo
    double segundos, promedio = 0;
    // printf("n,t\n");          // Imprimir encabezado

    for (int i = 0; i <= N; i++)
    {

        for (int n = 0; n < CALC; n++)
        {
            t_start = clock();
            iterFib2(i);
            t_final = clock();
            // calcula los segundos
            segundos = (double)(t_final - t_start) / CLOCKS_PER_SEC;
            // los guarda en la variable promedio
            promedio += segundos; // Esto es practicamente una sumatoria de los tiempos
        }

        printf("%d %f\n", i, promedio); // Imprimir n
        promedio = 0;
    }

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
