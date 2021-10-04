#include "libft.h"

char	*ft_strchr(const char	*str, int code)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *) str;
	while (*(ptr + i) != '\0')
	{
		if (*(ptr + i) == code)
			return (ptr + i);
		i++;
	}
	return (0);
}
