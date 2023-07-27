/**
 * _strncat - a function that concatenates two strings.
 * @dest: a pointer on a string
 * @src: a pointer on a string
 * @n: the number of characters that would be concat from src
 * Return: Pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	while (*dest != '\0')
		dest++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
