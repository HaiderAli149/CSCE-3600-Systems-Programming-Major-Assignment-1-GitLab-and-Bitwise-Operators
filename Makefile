# Makefile for CSCE-3600 Major Assignment 1

# Compiler
CC = gcc

# Compiler Flags
CFLAGS = -Wall -Wextra -std=c11

# Executable Name
TARGET = major1

# Source Files
SRCS = major1.c clz.c endian.c rotate.c parity.c

# Object Files (replace .c with .o)
OBJS = $(SRCS:.c=.o)

# Default Target
all: $(TARGET)

# Link object files into executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile each .c into .o
%.o: %.c major1.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -f $(OBJS) $(TARGET)

# Run the program
run: all
	./$(TARGET)
