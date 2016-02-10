# The compiler
CC = gcc

# Compiler flags:
#  -std=c99  uses c99 standard
#  -Wall     turns on most, but not all, compiler warnings
#  -pedantic warnings
CFLAGS  = -std=c99 -Wall -pedantic

# The build target executable:
TARGET = scanf

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
