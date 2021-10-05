#include "libft.h"

char	*ft_strrchr(const char	*str, int code)
{
	char	*ptr;
	int		i;

	i = ft_strlen(str) - 1;
	ptr = (char *) str;
	while (i >= 0)
	{
		if (*(ptr + i) == code)
			return (ptr + i);
		i--;
	}
	return (0);
}
