CC = gcc
CFLAGS = -g -Wall -ansi -pedantic

all: main

main: main.o zoo.o animal.o
	$(CC) $(CFLAGS) -o main main.o zoo.o animal.o

main.o: main.c zoo.h
	$(CC) $(CFLAGS) -c main.c

zoo.o: zoo.c zoo.h animal.h
	$(CC) $(CFLAGS) -c zoo.c

animal.o: animal.c animal.h
	$(CC) $(CFLAGS) -c animal.c

clean:
	rm -f main main.o zoo.o animal.o