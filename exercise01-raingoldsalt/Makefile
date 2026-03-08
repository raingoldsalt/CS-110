hello: hello.c
	gcc hello.c -Wall -Werror -o hello

test:
	./test-hello.sh

gh-test: clean hello test

clean:
	rm -f hello
	rm -rf tests-out
