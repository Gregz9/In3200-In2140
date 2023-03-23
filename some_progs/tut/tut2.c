#include <stdio.h>

int main(void) {
	
	//char a = 0b1010; 
	// char b = 10; 
	// char c = 0xfa; // 1111 1010

	
	// the pointer to the variable int in memory
	int *a;
	
	int num = 127; 
	int *pointer;

	// pointer to the addres of variable 'number'	
	pointer = &num; 


	printf("%p\n", pointer); 
	
	return 0;
}

