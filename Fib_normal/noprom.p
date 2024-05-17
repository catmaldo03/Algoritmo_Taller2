set term jpeg size 1200, 900  # Font configuration (optional)
set output "fib_normal_noprom.jpg"
set title "Fibonacci Normal (no promediado)" noenhanced
set xlabel "Secuencia ( {/Ital n})"
set ylabel "Tiempo ( {/Ital segundos})"
set grid
plot "noprom.dat" using 1:2 notitle with lines smooth bezier