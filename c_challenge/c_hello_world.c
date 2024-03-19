#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * hello_world - this function prints the first C hello world.
 */

void hello_world(void)
{
	printf("Abraham Livinus Says Hello World On Day 2 of the ");
	printf("#100daysofALXSE challenge with C language.\n");
}

/**
 * main - This script handles the main function that
 * prints C hello world.
 * And also executes the add function and other functions.
 *
 * hello_world - this function prints the first C hello world.
 *
 * Return: Always returns 0.
 */

int main(void)
{
	add(20, 50);
	add(1000000, 3289);
	add(123456, 78900);
	exit(0);
	hello_world();
	return (0);
}
