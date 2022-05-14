CC = gcc
CFLAGS = --std=c99 -g -pedantic -Wall

main: main.o quicksort.o
	${CC} ${CFLAGS} -o quicksort main.o quicksort.o

main.o: main.c quicksort.h
	${CC} ${CFLAGS} -c main.c

quicksort: quicksort.c quicksort.h
	${CC} ${CFLAGS} -c quicksort.c
