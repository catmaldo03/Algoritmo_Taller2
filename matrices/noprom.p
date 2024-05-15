set term jpeg size 1200, 900
set output "matriz_noprom5.jpg"
set title "Fibonacci Matriz (no promediado)" noenhanced
set xlabel "Secuencia ( {/Ital n})"
set ylabel "Tiempo ( {/Ital segundos})"
set grid
plot "noprom.dat" using 1:2 notitle with lines smooth bezier