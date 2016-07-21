build:
	gcc test.c rsa.c -o "test.out" -Wall -std=c99
run:
	./test.out
clean:
	rm -f test.out
