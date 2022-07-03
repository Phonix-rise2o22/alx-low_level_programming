#include <stdio.h>

/**
 * main-prints the size of various types on the computer
 * Return:returns the value of 0 if exit is proper
 */
int main(void)
{
int a;
long long int c;
char d;
float f;
long int b;
printf("Size of a char: %lu byte (s)\n", sizeof(d));
printf("Size of an int: %lu byte (s)\n", sizeof(a));
printf("Size of an long int: %lu byte (s)\n", sizeof(b));
printf("Size of a long long int: %lu byte (s)\n", sizeof(c));
printf("Size of a float: %lu byte (s)\n", sizeof(f));
}
return (0)
