CC = gcc
CFLAGS = -Wall -Wextra -g

all: main

main: main.o
	$(CC) $^ -o $@

main.o: main.c
	$(CC) $^ $(CFLAGS) -c -o $@

clean:
	rm -f main.o main
