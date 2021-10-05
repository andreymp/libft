#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	num)
{
	char	*to;
	char	*from;

	from = (char *) src;
	to = (char *) dest;
	if (to < from)
		ft_memcpy(dest, src, num);
	else
	{
		while (num--)
			*(to + num) = *(from + num);
	}
	return (dest);
}
