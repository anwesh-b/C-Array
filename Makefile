.PHONY: all clean

all: exec

main: main.c
	gcc main.c -o ./myapp

exec: main
	./myapp

clean:
	rm -f ./myapp

format:
	clang-format -i lib/array.h lib/type.h main.c

