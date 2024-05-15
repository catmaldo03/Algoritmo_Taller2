set term post eps enhanced color solid lw 1 size 5.0, 3.5 "Arial" 24
set output "Iter1_prom_prueba.eps"
set title "Fibonacci Iterativo 1 (prueba)" noenhanced
set xlabel "Secuencia ( {/Ital n})"
set ylabel "Tiempo ( {/Ital seconds})"
set grid
plot "prueba.dat" using 1:2 notitle with lines smooth bezier