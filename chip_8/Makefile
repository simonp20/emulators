#makefile for the chip 8 emulator

CC = g++
CFLAGS = -Wall -Wextra -Werror

.PHONY: all main clean

all: main

main: main.cpp
	$(CC) $(CFLAGS) $^ -o $@

clean: 
	rm -rf main
