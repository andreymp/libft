#include "libft.h"

int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	char	*p1;
	char	*p2;
	size_t	i;

	p1 = (char *) s1;
	p2 = (char *) s2;
	i = 0;
	while (p1 + i && p2 + i && i < n)
	{
		if (*(p1 + i) != *(p2 + i))
			return (*(unsigned char *)(p1 + i) - *(unsigned char *)(p2 + i));
		i++;
	}
	return (0);
}
