#ifndef dog_h
#define dog_h
#include <stdlib.h>
#include <stdio.h>

/**
 * main - dog my_dog
 * Return: Always 0
 */
int main(void)
{

	struct dog my_dog;

	my_dog.name = "Poppy";
 	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
