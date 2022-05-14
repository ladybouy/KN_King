CC = gcc
CFLAGS = --std=c99 -g -Wall -pedantic

rpn: rpn.o stack.o
	${CC} ${CFLAGS} -o rpn rpn.c stack.c

rpn.o: rpn.c stack.h
	${CC} ${CFLAGS} -c rpn.c stack.h

stack.o: stack.c stack.h
	${CC} ${CFLAGS} -c stack.c stack.h
