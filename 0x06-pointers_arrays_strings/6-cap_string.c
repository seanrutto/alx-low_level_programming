#include "main.h"

/**
 * cap_string - capitalizes all words of string
 * @str: string being capitalized.
 *
 * return: return a string with capitalized letters
 */

char *cap_string(char *str)
{
	int leter = 0;

	while (str[letter])
	{
		while (!(str[letter] >= 'a' && str[letter] <= 'z'))
			letter++;

		if (str[letter - 1] == ' ' || str[letter - 1] == '\t' || str[letter - 1] == '\n' || str[letter - 1] == ',' || str[letter - 1] == ';' || str[letter - 1] == '.' || str[letter - 1] == '!' || str[letter - 1] == '?' || str[letter - 1] == '"' || str[letter - 1] == '(' || str[letter - 1] == ')' || str[letter - 1] == '{' || str[letter - 1] == '}' || letter == 0)
			str[letter] -= 32;
		letter ++;
	}
}
