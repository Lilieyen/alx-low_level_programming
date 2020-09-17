#include<stdio.h>
int main() {
	int intType;
	float floatType;
	double doubleType;
	char charType;

//sizeof evaluates the size of a variable
	printf ("size of int: %1d bytes\n", sizeof(intType));
	printf ("size of float: %1d bytes\n", sizeof(floatType));
	printf ("size of double: %1d bytes\n", sizeof(doubleType));
	printf ("size of char: %1d bytes\n", sizeof(charType));
	return 0;
}
