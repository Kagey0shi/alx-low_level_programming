
Sign up
Shazam72
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
More
alx-low_level_programming/0x06-pointers_arrays_strings/100-rot13.c
@Shazam72
Shazam72 Adding last mandatory and advanced source files
 History
 1 contributor
28 lines (25 sloc)  494 Bytes
#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
