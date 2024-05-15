# Terminal configuration for JPEG output
set term jpeg size 1000, 700  # Font configuration (optional)

# Output filename
set output "Iter2_estt.jpg"

# Plot title and labels
set title "Fibonacci Iterativo 2 " noenhanced
set xlabel "Secuencia ( {/Ital n})"
set ylabel "Tiempo ( {/Ital seconds})"

# Grid lines
set grid

# Plot data from "prom.dat"
plot "noprom_est.dat" using 1:2 notitle with lines smooth bezier