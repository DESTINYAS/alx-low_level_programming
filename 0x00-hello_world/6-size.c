/*
 * file: 6-size.c
 * Author: DESTINYAS
 */

#include<stdio.h>

/**
 * main - prints the size of various types on the computer
 * it is compiled and run on.
 * Return: is 0.
 */
int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float: %zu byte(s)\n", sizeof(float));
	printf("my %s has %d chars\n", "string format", 30);
	return (0);
}
