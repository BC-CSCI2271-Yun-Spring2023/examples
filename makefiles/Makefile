main2: main2.o int_list.o
	gcc -std=c99 -Wall -g -o main2 int_list.o main2.o

main2.o: main2.c int_list.h
	gcc -std=c99 -Wall -g -c main2.c

int_list.o: int_list.c int_list.h
	gcc -std=c99 -Wall -g -c int_list.c

clean:
	rm -rf main2 main2.o int_list.o
