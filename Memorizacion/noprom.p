set term jpeg size 1200, 900
set output "memorizacion_noprom.jpg"
set title "Fibonacci Memorizado (no promediado)" noenhanced
set xlabel "Secuencia ( {/Ital n})"
set ylabel "Tiempo ( {/Ital segundos})"
set grid
plot "memorizacion_noprom.dat" using 1:2 notitle with lines smooth bezier