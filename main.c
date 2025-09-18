#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	char c_next;
	int i;
	int i_next;
	
	printf("Enter a character: ");
	scanf("%c", &c);
	
	i = c - '0';
	
	c_next = c + 1;
	i_next = c + 1 - '0';
	
	printf("The next character of %c (%i) is %c (%i)", c, i, c_next, i_next);
	
	return 0;
}