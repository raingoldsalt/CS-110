CFLAGS=-std=c99 -Wall
CC=gcc

fibonacci: main.o fibonacci.o
    $(CC) $(CFLAGS) main.o fibonacci.o -o fibonacci

tests: tests.o fibonacci.o
	$(CC) $(CFLAGS) fibonacci.o tests.o -o tests

main.o: main.c fibonacci.h
    $(CC) $(CFLAGS) -c main.c

tests.o: fibonacci.c fibonacci.h
    $(CC) $(CFLAGS) -c tests.c

fibonacci.o: fibonacci.c fibonacci.h
	$(CC) $(CFLAGS) -c fibonacci.c

gh-test-stats: clean tests
	./tests

clean:
	rm -f fibonacci tests *.o

