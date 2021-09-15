all: hello

hello: hello.c
	gcc -o $@ $^
