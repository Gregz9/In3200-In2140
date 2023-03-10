#include <stdio.h>

void funk(char arr[]) {
	printf("%ld\n", sizeof(arr));
}


int main(void) { 

	// char word[] = "hello"; 
	char *s = "hello";

	// printf("%s\n", word); 
	printf("%s\n", s);

	printf("\n"); 
	
	// char arr[5]; 
	// arr[0] = 'h'; 
	// arr[1] = 'e';
	// arr[2] = 'l';
	// arr[3] = 'l';
	// arr[5] = '\0'; 

	// printf("%s\n", arr); 	
	// printf("\n"); 

	
	printf("%s\n", s);
	printf("%p\n", s); 
	
	// printf("\n"); 

	// *s[0] = "d";
	//
	// printf("%s\n", s);
	
	printf("%s\n", "hello \0 friend"); 

	printf("\n");

	char strings1[] = "Hello and friend";

	strings1[5] = 0; 
	char *rest = strings1 + 6;

	printf("%s\n", strings1);
	printf("%s\n", rest);
	
	printf("%ld\n", sizeof(strings1));
	
	char array[11];
	funk(array);

	return 0; 
}
