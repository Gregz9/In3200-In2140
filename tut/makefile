all: compile1 compile2


compile1: tut1.c
	gcc tut1.c -o demo1
	./demo1

compile2: tut2.c 
	gcc tut2.c -o demo2
	./demo2 

compile3: tut3.c 
	gcc tut3.c -o demo3 
	./demo3

compile4: array_pointers.c 
	gcc array_pointers.c -o arrays 
	./arrays

clean: 
	rm -f demo3 demo2 demo1 arrays
