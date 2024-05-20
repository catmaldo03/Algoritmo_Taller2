CC=gcc
CFLAGS=-Wall
EXEC = prom
EXEC2 = noprom

all: 
	$(CC) $(CFLAGS) recurrencia-promedio.c -o $(EXEC) -lm
	$(CC) $(CFLAGS) recurrencia.c -o $(EXEC2) -lm
	./$(EXEC)
	./$(EXEC2)
	gnuplot $(EXEC).p
	gnuplot $(EXEC2).p
clean:
	rm -rf $(EXEC)
	rm -rf $(EXEC2)
	rm -rf *.dat
	rm -rf *.jpg