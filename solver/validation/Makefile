CC = gcc
CFLAGS = -std=c99 -Wall -Werror -pedantic

input_val.o: input_val.c

test1: test1.c ../cunit/cunit.o input_val.o

test2: test2.c ../cunit/cunit.o input_val.o

.PHONY: test
test: test1 test2
	./test1
	./test2

.PHONY: clean
clean:
	-rm input_val.o test1 test2
