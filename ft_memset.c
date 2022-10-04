#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	while (n)
	{
		((unsigned char *)s)[n - 1] = c;
		n--;
	}
	return (s);
}
