#include <stdio.h> 

int main() {
	
	int this_is_a_number; 

	printf("I am alive! Beware.\n" ); 
	char a = getchar(); 
	printf("%c\n", a);

	printf("\n"); 
	printf("Please enter a number: ");
	scanf("%d", &this_is_a_number ); 
	printf("You entered %d\n", this_is_a_number);
	getchar(); 

	return 0;
}
