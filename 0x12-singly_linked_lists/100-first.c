#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * before_main_func - prints string before main execution
 * Return:void
 */
void __attribute__((constructor)) before_main_func()
{
	char first_half[] = "You're beat! and yet, you must allow,";
	char second_half[] = "I bore my house upon my back!";
	char message[100];

	strcpy(message, first_half);
	strcat(message, "\n");
	strcat(message, second_half);
	printf("%s\n", message);
}
