CC=gcc
CFLAGS=-Wall
EXEC = prom
EXEC2 = noprom

all: 
	$(CC) $(CFLAGS) matrices-promedio.c -o $(EXEC)
	$(CC) $(CFLAGS) matrices.c -o $(EXEC2)
	./$(EXEC)
	./$(EXEC2)
	gnuplot $(EXEC).p
	gnuplot $(EXEC2).p
clean:
	rm -rf $(EXEC)
	rm -rf $(EXEC2)
	rm -rf *.dat
	rm -rf *.jpg