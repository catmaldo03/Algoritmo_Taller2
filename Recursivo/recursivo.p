set term jpeg size 1200, 900  # Font configuration (optional)
set output "recursivo.jpg"
set title "Fibonacci Recursivo" noenhanced
set xlabel "Secuencia ( {/Ital n})"
set ylabel "Tiempo ( {/Ital segundos})"
set grid
plot "recursivo.dat" using 1:2 notitle with lines smooth bezier