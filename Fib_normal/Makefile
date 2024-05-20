CC=gcc
CFLAGS=-Wall
EXEC = prom
EXEC2 = noprom

all: 
	$(CC) $(CFLAGS) fib_normal_noprom.c -o $(EXEC2)
	$(CC) $(CFLAGS) fib_normal_prom.c -o $(EXEC)
	./prom
	./noprom
	gnuplot noprom.p
	gnuplot prom.p
clean:
	rm -rf $(EXEC)
	rm -rf $(EXEC2)
	rm -rf *.dat
	rm -rf *.jpg
