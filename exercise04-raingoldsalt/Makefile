all: factorial non_negative_integers powers_of_two

factorial: factorial.c
	gcc factorial.c -Wall -Werror -o factorial

non_negative_integers: non_negative_integers.c
	gcc non_negative_integers.c -Wall -Werror -o non_negative_integers

powers_of_two: powers_of_two.c
	gcc powers_of_two.c -Wall -Werror -o powers_of_two

test-factorial:
	./test-factorial.sh

test-integers:
	./test-integers.sh

test-powers:
	./test-powers.sh

gh-test-factorial: clean factorial test-factorial
gh-test-integers: clean non_negative_integers test-integers
gh-test-powers: clean powers_of_two test-powers

clean:
	rm -f factorial
	rm -f non_negative_integers
	rm -f powers_of_two
	rm -rf tests-out
