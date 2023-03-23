#include <stdio.h>

int main(void) {

	int a = 10; 
	int b = 20; 
	int c = 30; 
	int d = 10; 
	
	int input; 
	printf("Selection: "); 
	scanf("%d", &input);
	switch ( input ) { 
		case 1: 
			printf("Equal to b\n");
			break;
		case 2: 
			printf("Equal to c\n");
			break;
		default: 
			printf("Bad input, quitting!\n");
			break;
	}	
	getchar();

}
