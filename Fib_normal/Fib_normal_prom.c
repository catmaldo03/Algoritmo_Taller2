/*
 * @author Catalina Maldonado y Ariel Lopez
 * metodo-Memorizacion
 * */
#include <stdio.h>
#include <time.h>
#define N 90
#define CALC 1000
int main()
{
    FILE *datos;
    clock_t start, end;
    double promedio, tiempo;
    long long int array[N];
    datos = fopen("prom.dat", "w");
    for (int k = 0; k <= N; k++)
    {

        for (int j = 0; j < CALC; j++)
        {
            start = clock();

            for (int i = 0; i <= k; i++)
            {
                if (i == 0)
                    array[i] = 0;
                else if (i == 1)
                    array[i] = 1;
                else
                    array[i] = array[i - 1] + array[i - 2];
            }

            end = clock();

            tiempo = (double)(end - start) / CLOCKS_PER_SEC;

            promedio += tiempo;
        } // Mostrar el tiempo transcurrido
        promedio /= CALC;
        printf("%d %f \n", k, promedio);
        fprintf(datos, "%d %f \n", k, promedio);
    }
    fclose(datos);
    return 0;
}
