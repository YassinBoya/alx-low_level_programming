/**
 * _strncat - a function that concatenates two strings.
 * @dest: a pointer on a string
 * @src: a pointer on a string
 * @n: the number of characters that would be concat from src
 * Return: Pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i len = 0;

	while (dest[len] != '\0')
		len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
