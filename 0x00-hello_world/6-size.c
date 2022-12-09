#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
*/

int main(void)

{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %ln byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a int: %ln byte(s)\n", (unsigned long)sizeof(b);
	printf("size of a long int: %ln byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %ln byte(s)n\n", (unsigned long)sizeof(d));
	printf("size of a float: %ln byte(s)n\n", (unsigned long)sizeof(f));
	return (0);
}
