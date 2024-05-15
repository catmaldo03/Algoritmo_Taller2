set term jpeg size 1200, 900
set output "recurrencia_noprom6.jpg"
set title "Fibonacci Recurrencia (no promediado)" noenhanced
set xlabel "Secuencia ( {/Ital n})"
set ylabel "Tiempo ( {/Ital segundos})"
set grid
plot "noprom.dat" using 1:2 notitle with lines smooth bezier