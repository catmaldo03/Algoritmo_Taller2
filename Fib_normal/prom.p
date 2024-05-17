set term jpeg size 1200, 900  # Font configuration (optional)
set output "fib_normal_prom.jpg"
set title "Fibonacci Normal (promediado)" noenhanced
set xlabel "Secuencia ( {/Ital n})"
set ylabel "Tiempo ( {/Ital segundos})"
set grid
plot "prom.dat" using 1:2 notitle with lines smooth bezier