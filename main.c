#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a;
	float b;
	float result;
	
	printf("Enter numerator: ");
	scanf("%f", &a);
	
	printf("Enter denominator: ");
	scanf("%f", &b);
	
	result = a / b;
	
	printf("The result is %f", result);
	
	return 0;
}