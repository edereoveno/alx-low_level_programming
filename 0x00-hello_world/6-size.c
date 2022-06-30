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

	printf("Size of char: %lu byte(s)\n", sizeof(charType));
	printf("Size of intType: %lu byte(s)\n", sizeof(intType));
	printf("Size of longIntType: %lu byte(s)\n", sizeof(longIntType));
	printf("Size of longLongIntType: %lu byte(s)\n", sizeof(longLongIntType));
	printf("Size of float: %lu byte(s)\n", sizeof(floatType));
	return (0);

}
