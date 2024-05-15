/*
 * @author Catalina Maldonado y Ariel Lopez
 * metodo-por-matrices-promedio
 * */

// declaracion de bibliotecas
#include <stdio.h>
#include <time.h>
#define N 90      // Numeros de Fib
#define CALC 1000 // Cantidad de veces que se repite el calculo del numero de Fibonacci actual

// declaracion de funciones
unsigned long long matrices(int n);
void powerMatrix(unsigned long long F[2][2], int n);
void multiplyMatrix(unsigned long long A[2][2], unsigned long long B[2][2]);

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
        for (i = 1; i <= CALC; i++)
        {
            // inicia la medicion de tiempo
            t_start = clock();
            matrices(n);
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

void multiplyMatrix(unsigned long long A[2][2], unsigned long long B[2][2])
{
    unsigned long long temp[2][2];
    temp[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
    temp[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
    temp[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
    temp[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];
    A[0][0] = temp[0][0];
    A[0][1] = temp[0][1];
    A[1][0] = temp[1][0];
    A[1][1] = temp[1][1];
}

/* Función para calcular la potencia de una matriz */
void powerMatrix(unsigned long long F[2][2], int n)
{
    if (n == 0 || n == 1)
        return;
    unsigned long long M[2][2] = {{1, 1}, {1, 0}};
    powerMatrix(F, n / 2);
    multiplyMatrix(F, F);
    if (n % 2 != 0)
        multiplyMatrix(F, M);
}

/* Función para calcular el n-ésimo número de Fibonacci */
unsigned long long matrices(int n)
{
    if (n == 0)
        return 0;
    unsigned long long F[2][2] = {{1, 1}, {1, 0}};
    powerMatrix(F, n - 1);
    return F[0][0];
}
