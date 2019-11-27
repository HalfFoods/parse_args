all: parse_args.c
	gcc -o program parse_args.c

run:
	./program

clean:
	rm *.o
	rm program
