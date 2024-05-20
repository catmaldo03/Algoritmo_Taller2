CC=gcc
CFLAGS=-Wall
EXEC = recursivo

all: 
	$(CC) $(CFLAGS) Recursivo.c -o $(EXEC)
	./$(EXEC)
	gnuplot $(EXEC).p
clean:
	rm -rf $(EXEC)
	rm -rf *.dat
	rm -rf *.jpg