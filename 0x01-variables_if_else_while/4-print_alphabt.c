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
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
	putchar(letter);
}
putchar('\n');
return (0);
}
