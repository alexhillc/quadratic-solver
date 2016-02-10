# The compiler
CC = gcc

# Compiler flags:
#  -std=c99  uses c99 standard
#  -Wall     turns on most, but not all, compiler warnings
#  -pedantic warnings
CFLAGS  = -std=c99 -Wall -pedantic

# Libraries
LDLIBS  = -lgmp

# The build target executable:
TARGET = gmp

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) $(LDLIBS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
