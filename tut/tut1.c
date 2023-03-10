#include <stdio.h>

int main() {
	// basic datatypes in C 	
	/*char c; // 1 byte  
	short s; // 2 bytes  
	long l; // 4 bytes 
	int a; // 8 bytes

	printf("printing digit named a: %d\n", a); 	

	unsigned char uc; 

	c = 80; 
	uc = c; 

	printf("uc is: %c\n", uc); 	
	printf("uc is: %d\n", uc);

	for (int i = 0; i < 10; i++) {
	}
	
	printf("sizeof: %d\n", sizeof(int));  

	printf("Hello World!\n");
	*/
	
	char s[10]; 
	s[9] = 'b'; 
	printf("Printing element of array: %c\n", s[9]); 
	return 0;
}
