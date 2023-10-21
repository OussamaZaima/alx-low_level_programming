#include <stdio.h>

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - executes before main()
 *
 * Return: void
 */
void _constructor(void)
{
    printf("(A tortoise, having a pretty good sense of a hare's nature, challenges one to a race.)\n");
}
