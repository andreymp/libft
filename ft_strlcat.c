#include "libft.h"
#define TEST 7

size_t	ft_strlcat(char	*dest, const char	*src, size_t	size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	while (dest + i && i < size)
		i++;
	if (*(dest + i) || size == dest_len)
		return (dest_len + i - 1);
	else
	{
		ft_memcpy(dest + dest_len, src, size - dest_len - 1);
		*(dest + dest_len + size) = '\0';
		return (dest_len + src_len);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char dest1[50] = "Hello, ";
	char dest2[50] = "Hello, ";

	printf("%zu %s\n", ft_strlcat(dest1, "world!", TEST), dest1);
	printf("%lu %s\n", strlcat(dest2, "world!", TEST), dest2);
}
*/