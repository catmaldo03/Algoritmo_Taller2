set term post eps enhanced color solid lw 1 size 5.0, 3.5 "Arial" 24
set output "Recurrecia_est.eps"
set title "Fibonacci Recurrencia" noenhanced
set xlabel "Secuencia ( {/Ital n})"
set ylabel "Tiempo ( {/Ital seconds})"
set grid
plot "noprom_est.dat" using 1:2 notitle with lines smooth bezier