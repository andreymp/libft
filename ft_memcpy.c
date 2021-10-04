#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t	num)
{
	char	*to;
	char	*from;
	size_t	i;

	to = (char *) dest;
	from = (char *) src;
	i = 0;
	while (*(from + i) != '\0' && i < num)
	{
		*(to + i) = *(from + i);
		i++;
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>
int main()
{
	char str1[] = "Hi everyone";
	char str2[6];

	puts(ft_memcpy(str2, str1, 1));
}