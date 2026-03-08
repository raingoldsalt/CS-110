all: square triangle pyramid checkerboard 

square: square.c
	gcc square.c -Wall -Werror -o square

triangle: triangle.c
	gcc triangle.c -Wall -Werror -o triangle

pyramid: pyramid.c
	gcc pyramid.c -Wall -Werror -o pyramid

checkerboard: checkerboard.c
	gcc checkerboard.c -Wall -Werror -o checkerboard

test-square:
	./test-square.sh

test-triangle:
	./test-triangle.sh

test-pyramid:
	./test-pyramid.sh

test-checkerboard:
	./test-checkerboard.sh

gh-test-square: clean square test-square
gh-test-triangle: clean triangle test-triangle
gh-test-pyramid: clean pyramid test-pyramid
gh-test-checkerboard: clean checkerboard test-checkerboard

clean:
	rm -f square
	rm -f triangle
	rm -f pyramid
	rm -f checkerboard
	rm -rf tests-out
