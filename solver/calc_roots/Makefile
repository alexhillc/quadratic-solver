CC = gcc
CFLAGS = -std=c99 -Wall -Werror -pedantic
LDFLAGS = -lm

calc_roots.o: calc_roots.c

test1: test1.c ../cunit/cunit.o ../num_roots/num_roots.o ../sqrt/sqrt.o calc_roots.o

test2: test2.c ../cunit/cunit.o ../num_roots/num_roots.o ../sqrt/mock_sqrt.o calc_roots.o

test: test1 test2
	./test1
	./test2

.PHONY: clean
clean:
	-rm calc_roots.o test1 test2
