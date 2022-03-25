int check_seperators(char c);

/**
 * cap_string - Capitalizes all words of a string.
 * @s: Input string to capitalize letters
 *
 * Return: Pointer to s
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
		}
		if (check_seperators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
