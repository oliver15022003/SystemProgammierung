CC = gcc
CFLAGS = -ansi -pedantic -Wall

all: a1 a2 a3

a1: Aufgabe1_Sin.c
	$(CC) $(CFLAGS) -o aufgabe1 Aufgabe1_Sin.c -lm

a2: Aufgabe2_Sterne.c
	$(CC) $(CFLAGS) -o aufgabe2 Aufgabe2_Sterne.c

a3: Aufgabe3_Kalender.c
	$(CC) $(CFLAGS) -o aufgabe3 Aufgabe3_Kalender.c

clean:
	rm -rf aufgabe1 aufgabe1.exe aufgabe2 aufgabe2.exe aufgabe3 aufgabe3.exe

	