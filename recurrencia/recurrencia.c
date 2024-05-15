/*
 * @author Catalina Maldonado y Ariel Lopez
 * metodo-ecuacion-recurrencia
 * */

// declaracion de bibliotecas
#include <stdio.h>
#include <time.h>
#include <math.h>
#define N 90 // Numeros de Fib
#define CALC 1000
#define PRUEBAS 50

// declaracion de funciones
unsigned long long recurrencia(int n);

// funcion principal
int main()
{
    FILE *datos;
    clock_t t_start, t_final; // Variables de tiempo
    double segundos, promedio = 0;
    // printf("n,t\n");          // Imprimir encabezado
    datos = fopen("noprom.dat", "w");
    for (int i = 0; i <= N; i++)
    {
        for (int k = 0; k < PRUEBAS; k++)
        {
            for (int j = 1; j <= CALC; j++)
            {
                t_start = clock();
                recurrencia(i);
                t_final = clock();
                segundos = (double)(t_final - t_start) / CLOCKS_PER_SEC;
                // los guarda en la variable promedio
                promedio += segundos; // Esto es practicamente una sumatoria de los tiempos
            }
        }
        promedio /= PRUEBAS;

        // indica el numero de Fibonacci, y el tiempo de ejecucion promedio
        printf("%d %f\n", i, promedio);
        fprintf(datos, "%d %f \n", i, promedio);
        promedio = 0;
    }
    fclose(datos);
    return 0;
}

unsigned long long recurrencia(int n)
{
    return (1 / sqrt(5)) * (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n));
}
