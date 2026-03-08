all: one two

one: program_one.c
	gcc program_one.c -Wall -Werror -o one

two: program_two.c
	gcc program_two.c -Wall -Werror -o two

test-one:
	./test-one.sh

test-two:
	./test-two.sh

gh-test-one: clean all test-one
gh-test-two: clean all test-two

clean:
	rm -f one
	rm -f two
	rm -rf tests-out
