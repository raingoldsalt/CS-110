CFLAGS=-std=c99 -Wall
CC=gcc

stats-struct: stats.o main.o
	$(CC) $(CFLAGS) stats.o main.o -o stats-struct

main.o: main.c stats.h
	$(CC) $(CFLAGS) -c main.c

stats.o: stats.h stats.c
	$(CC) $(CFLAGS) -c stats.c

test-stats-struct:
	./test-stats-struct.sh

gh-test-stats-struct: clean stats-struct test-stats-struct

clean:
	rm -f stats-struct *.o
	rm -f a.out
	rm -rf tests-out
