all: distance rectangle triangle

distance: distance.c
	gcc distance.c -lm -Wall -Werror -o distance

rectangle: rectangle.c
	gcc rectangle.c -Wall -Werror -o rectangle

triangle: triangle.c
	gcc triangle.c -Wall -Werror -o triangle

test-distance:
	./test-distance.sh

test-rectangle:
	./test-rectangle.sh

test-triangle:
	./test-triangle.sh

gh-test-distance: clean distance test-distance
gh-test-rectangle: clean rectangle test-rectangle
gh-test-triangle: clean triangle test-triangle

clean:
	rm -f distance
	rm -f rectangle
	rm -f triangle
	rm -rf tests-out
