#include <stdio.h>

int main(void) {
	
	int ranNum = 34; 
	int *a, b, c;
	// Illegal operation
	// a = ranNum; 
	
	a = &ranNum;	
	printf("%p\n", &ranNum);
	printf("%p\n", a);

	b = 45;
	printf("%d\n", b);
	
	*a += 2;
	printf("%d\n", *a);

	return 0; 
}
