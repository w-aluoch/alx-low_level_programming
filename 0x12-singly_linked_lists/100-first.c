#include "lists.h"
#include <stdio.h>
void ComeFirstCTC(void)__attribute__ ((constructor));
/**
 * ComeFirstCTC - functions that runs before main function
 */
void ComeFirstCTC(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
