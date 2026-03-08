all: array-functions paycheck

array-functions: array_functions.c
	gcc array_functions.c -Wall -Werror -o array-functions

paycheck: paycheck.c
	gcc paycheck.c -Wall -Werror -o paycheck

test-paycheck:
	./test-paycheck.sh

test-array-functions:
	./test-array-functions.sh

gh-test-paycheck: clean paycheck test-paycheck
gh-test-array-functions: clean array-functions test-array-functions

clean:
	rm -f array-functions
	rm -f paycheck
	rm -f a.out
	rm -rf tests-out
