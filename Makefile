# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
LIBS = -lcs50

# Generic rule: compile any .c file into an executable
%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LIBS)
