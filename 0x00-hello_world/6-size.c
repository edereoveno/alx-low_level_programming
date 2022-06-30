#include <stdio.h>
/**
  * main - prints out the sizes of variables
  *Return: 0 if correct
  */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongIntType;
	float floatType;

	printf("Size of char: %lu bytes\n", sizeof(charType));
	printf("Size of intType: %lu bytes\n", sizeof(intType));
	printf("Size of longIntType: %lu bytes\n", sizeof(longIntType));
	printf("Size of longLongIntType: %lu bytes\n", sizeof(longLongIntType));
	printf("Size of float: %lu bytes\n", sizeof(floatType));
	return (0);

}
