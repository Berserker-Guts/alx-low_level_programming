#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d byte(s)\n", (unasigned long)sizeof(a));
	printf("Size of an int: %d byte(s)\n", (unasigned long)sizeof(b));
	printf("Size of a long int: %d byte(s)\n", (unasigned long)sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", (unasigned long)sizeof(d));
	printf("Size of a float: %d byte(s)\n", (unasigned long)sizeof(f));
	return (0);
}
