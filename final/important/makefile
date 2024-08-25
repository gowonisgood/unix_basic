CC=gcc
CFLAGS=-I.

all: program

program: main.o process.o
	$(CC) -o program main.o process.o

main.o: main.c
	$(CC) -c main.c $(CFLAGS)

process.o: process.c
	$(CC) -c process.c $(CFLAGS)

clean:
	rm -f *.o program
