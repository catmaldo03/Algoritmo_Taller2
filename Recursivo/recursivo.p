set term post eps enhanced color solid lw 1 size 5.0, 3.5 "Arial" 24
set output "Recursivo.eps"
set title "Fibonacci Recusivo" noenhanced
set xlabel "Secuencia ( {/Ital n})"
set ylabel "Tiempo ( {/Ital seconds})"
set grid
plot "recursivo.dat" using 1:2 notitle with lines smooth bezier