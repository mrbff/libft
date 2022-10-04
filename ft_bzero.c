#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	while (n)
	{
		((unsigned char *)s)[n - 1] = '\0';
		n--;
	}
	return (s);
}
