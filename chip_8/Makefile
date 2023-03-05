#makefile for the chip 8 emulator

CC = g++
CFLAGS = -Wall -Wextra -Werror

.PHONY: all main clean run

all: main

main: main.cpp
	$(CC) $(CFLAGS) $^ -o $@

run:
	./main

clean: 
	rm -rf main
