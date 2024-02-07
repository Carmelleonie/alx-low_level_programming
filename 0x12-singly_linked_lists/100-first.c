#include "lists.h"
void __attribute__((constructor)) print_first(); 
/**
*print_first - it prints a given sentence before the sentence in the main function
*Return: Nothing
*/
void print_first()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
