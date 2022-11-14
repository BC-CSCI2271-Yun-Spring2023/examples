all: segments probe call_stack stack_overflow stack_overflow2

segments: segments.o
	gcc -std=c99 -Wall -g -o segments segments.o

segments.o: segments.c
	gcc -std=c99 -Wall -g -c segments.c

probe: probe.o
	gcc -std=c99 -Wall -g -o probe probe.o

probe.o: probe.c
	gcc -std=c99 -Wall -g -c probe.c

call_stack: call_stack.o
	gcc -std=c99 -Wall -g -o call_stack call_stack.o

call_stack.o: call_stack.c
	gcc -std=c99 -Wall -g -c call_stack.c

stack_overflow: stack_overflow.o
	gcc -std=c99 -Wall -g -o stack_overflow stack_overflow.o

stack_overflow.o: stack_overflow.c
	gcc -std=c99 -Wall -g -c stack_overflow.c

stack_overflow2: stack_overflow2.o
	gcc -std=c99 -Wall -g -o stack_overflow2 stack_overflow2.o

stack_overflow2.o: stack_overflow2.c
	gcc -std=c99 -Wall -g -c stack_overflow2.c

clean:
	rm -rf segments segments.o probe probe.o call_stack call_stack.o stack_overflow stack_overflow.o stack_overflow2 stack_overflow2.o
