set term jpeg size 1200, 900
set output "recrapido_noprom5.jpg"
set title "Fibonacci Recursivo Rapido (no promediado)" noenhanced
set xlabel "Secuencia ( {/Ital n})"
set ylabel "Tiempo ( {/Ital segundos})"
set grid
plot "noprom2.dat" using 1:2 notitle with lines smooth bezier