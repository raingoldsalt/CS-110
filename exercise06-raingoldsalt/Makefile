all: array_sum_avg array_abs

array_sum_avg: array_sum_avg.c
	gcc array_sum_avg.c -Wall -Werror -o array_sum_avg

array_abs: array_abs.c
	gcc array_abs.c -Wall -Werror -o array_abs

test-array-sum-avg:
	./test-array-sum-avg.sh

test-array-abs:
	./test-array-abs.sh

gh-test-array-sum-avg: clean array_sum_avg test-array-sum-avg
gh-test-array-abs: clean array_abs test-array-abs

clean:
	rm -f array_sum_avg
	rm -f array_abs
	rm -rf tests-out
