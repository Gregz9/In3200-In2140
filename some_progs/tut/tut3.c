#include <stdio.h>

int global; 

void function() {
	int local; 
	printf("Local to function: %p\n", &local); 
}

int main(void) {
	
	// int ranNum = 34; 
	// int *a, b, c;
	// Illegal operation
	// a = ranNum; 
	
	// a = &ranNum;	
	// printf("%p\n", &ranNum);
	// printf("%p\n", a);
	//
	// b = 45;
	// printf("%d\n", b);
	// 
	// *a += 2;
	// printf("%d\n", *a);
	//
	// printf("Global: 0x%lx\n", &global);
	// printf("Global: %p\n", &global); 
	// // As is apparent, the address of the global 
	// // variable is located in the lower part fo the stack
	// printf("Local variable: %p\n", a);
	// function();
	
	char c = 'a'; 
	char *p = &c; 
	printf("Numerical value og char c: %d\n", c);

	*p += 2; 
	printf("Numerical value after update: %d\n", *p); 
	printf("The char after update: %c\n", c);

	return 0; 
}
