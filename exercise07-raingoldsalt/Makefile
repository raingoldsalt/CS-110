all: blur transpose

blur: blur.c
	gcc blur.c -Wall -Werror -o blur

transpose: transpose.c
	gcc transpose.c -Wall -Werror -o transpose

test-blur:
	./test-blur.sh

test-transpose:
	./test-transpose.sh

gh-test-blur: clean blur test-blur
gh-test-transpose: clean transpose test-transpose

clean:
	rm -f transpose
	rm -f blur
	rm -f a.out
	rm -rf tests-out
