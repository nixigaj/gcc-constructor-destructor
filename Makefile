all: build

main.o: main.c
	@gcc -c -g main.c

lib.o: lib.c
	@gcc -c -g lib.c

build: main.o lib.o
	@gcc main.o lib.o -o gcc-c-d

run: build
	@./gcc-c-d

clean:
	@rm -rf gcc-c-d *.o
