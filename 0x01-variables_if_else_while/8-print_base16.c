/*
 * File: 0-positive_or_negative.c
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints Prints a random number and states whether
 * it is positive, negative, or zero.
 * Return: is 0.
 */
int main(void)
{
int num;
char letter;
for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');
for (letter = 'a'; letter <= 'f'; letter++)
	putchar(letter);
putchar('\n');
return (0);
}
