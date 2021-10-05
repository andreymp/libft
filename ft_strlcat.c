#include "libft.h"

size_t	ft_strlcat(char	*dest, const char	*src, size_t	size)
{
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (src_len + 1 >= size)
		return (src_len + size);
	else
	{
		ft_memcpy(dest + dest_len, src, size - 1);
		*(dest + dest_len + size - 1) = '\0';
	}
	return (src_len + dest_len);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char dest1[50] = "Hello, ";
	char dest2[50] = "Hello, ";

	printf("%zu %s\n", ft_strlcat(dest1, "world!", 8), dest1);
	printf("%lu %s\n", strlcat(dest2, "world!", 8), dest2);
}
