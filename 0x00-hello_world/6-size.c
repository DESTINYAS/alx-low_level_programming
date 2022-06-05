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
	print("size of a char: %zu byte(s)\n", sizeof(char));
	print("size of an int: %zu byte(s)\n", sizeof(int));
	print("size of a long: %zu byte(s)\n", sizeof(long int));
	print("size of a long long: %zu byte(s)\n", sizeof(long long int);
	print("size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
