set term jpeg size 1200, 900
set output "recrapido_prom.jpg"
set title "Fibonacci Recursivo Rapido (promediado)" noenhanced
set xlabel "Secuencia ( {/Ital n})"
set ylabel "Tiempo ( {/Ital segundos})"
set grid
plot "prom.dat" using 1:2 notitle with lines smooth bezier