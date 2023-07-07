#include "main.h"
/**
 * _memcpy - This is my funcion copy Src to dest
 * @dest: This is my result
 * @src: This is my string
 * @n: This is n my number bytes to copy
 * Return: This my my string copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *pDst = dest;
	char const *pSrc =  src;

	for (i = 0; i < n; i++)
	{
		*pDst++ = *pSrc++;
	}
	return (dest);
}
