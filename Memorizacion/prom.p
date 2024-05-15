set term jpeg size 1200, 900
set output "memorizacion_prom.jpg"
set title "Fibonacci Memorizado (promediado)" noenhanced
set xlabel "Secuencia ( {/Ital n})"
set ylabel "Tiempo ( {/Ital segundos})"
set grid
plot "memorizacion_prom.dat" using 1:2 notitle with lines smooth bezier