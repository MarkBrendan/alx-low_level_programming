#include <stdio.h>

/**
 * premain - a funtion that prints before the main function
 *
 * Return : void
 */
void __attribute__((constructor))premain(void)
{
	printf(
			"You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
