set term jpeg size 1200, 900
set output "iter2_prom.jpg"
set title "Fibonacci Iterativo 2 (promediado)" noenhanced
set xlabel "Secuencia ( {/Ital n})"
set ylabel "Tiempo ( {/Ital segundos})"
set grid
plot "prom.dat" using 1:2 notitle with lines smooth bezier