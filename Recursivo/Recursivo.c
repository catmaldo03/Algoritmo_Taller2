// declaracion de bibliotecas
#include <stdio.h>
#include <time.h>

// declaracion de funciones
int FibRec(int n);
// funcion principal
int main()
{
    // declaracion de variables de tiempo
    clock_t t_start, t_final;
    double segundos, promedio = 0;
    // declaraciond de otras variables
    int calculos = 10, i, n, a = 0; // calculos es la cantidad de veces que se realiza la secuencia de fibonacci
    for (n = 0; n < 40; n++)
    {
        for (i = 0; i < calculos; i++)
        {
            // inicia la medicion de tiempo
            t_start = clock();
            a = FibRec(n);
            // termina la medicion de tiempo
            t_final = clock();
            // calcula los segundos
            segundos = (double)(t_final - t_start) / CLOCKS_PER_SEC;
            // los guarda en la variable promedio
            promedio += segundos;
        }
        // Se calcula  el promedio que es la cantidad de segundos, divido los calculos
        promedio /= calculos;

        // indica el puesto de la secuencia, y el tiempo
        printf("%d %f\n", n + 1, promedio);

        // indica el puesto de la secuencia, el resultado de esta, y el promedio
        // printf("%d %d %f\n", n + 1, a, promedio);
        //  printf("fib: %d ---- t: %f\n", a, promedio);

        //   se reinician los valores
        promedio = 0;
        a = 0;
    }

    return 0;
}

// funcion de fibonacci recursiva
int FibRec(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return FibRec(n - 1) + FibRec(n - 2);
}