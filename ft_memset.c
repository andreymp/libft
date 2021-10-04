#include "libft.h"

void	*ft_memset(void	*source, int	code, size_t	length)
{
	size_t		i;
	char		*str;

	i = 0;
	str = (char *) source;
	if (ft_strlen(str) < length)
		return (0);
	else
	{
		while (i < length && *(str + i) != '\0')
		{
			*(str + i) = (unsigned char) code;
			i++;
		}
	}
	return (source);
}
