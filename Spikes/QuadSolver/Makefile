# The compiler
CC = gcc

# Compiler flags:
#  -std=c99  uses c99 standard
#  -g        adds debugging information to the executable file
#  -Wall     turns on most, but not all, compiler warnings
CFLAGS  = -std=c99 -g -Wall

# The build target executable:
TARGET = QuadSolver

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
