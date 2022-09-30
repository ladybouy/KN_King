CC = gcc
CFLAGS = --std=c99 -g -Wall -pedantic

inventory: inventory.o readline.o
		${CC} ${CFLAGS} -o inventory inventory2.o readline.o

inventory.o: inventory2.c readline.h
		${CC} ${CFLAGS} -c inventory2.c

readline.o: readline.c readline.h
		${CC} ${CFLAGS} -c readline.c
