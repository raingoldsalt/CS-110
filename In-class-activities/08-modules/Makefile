#<target name>: <target dependencies>
#	<command>
#	<optional commands>

test_triangle: test_triangle.o triangle.o
	gcc triangle.o test_triangle.o -o test_triangle

triangle.o: triangle.c triangle.h
	gcc -c triangle.c

test_triangle.o: test_triangle.c triangle.h
	gcc -c test_triangle.c
