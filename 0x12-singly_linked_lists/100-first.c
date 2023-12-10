#include <stdio.h>

/**
 * premain - a funtion that prints before the main function
 *
 * Return : void
 */
void premain(void) __attribute__((constructor))
{
	printf(
			"You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
