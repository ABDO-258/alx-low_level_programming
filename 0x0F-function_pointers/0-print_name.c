#include <stdio.h>
/**
*print_name - fonction to print name
*
*@name: name to print
*
*@f: pointer to fonction to print name
*/

void print_name(char *name, void (*f)(char *))
{
	if ( name != NULL && f != NULL)
	f(name);
}
	
