#include <stdio.h>
#include <stdnoreturn.h>

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - executes before main()
 */
void _constructor(void)
{
    printf("(You're beat! and yet, you must allow,\n"
		    "I bore my house upon my back!\n");
}
