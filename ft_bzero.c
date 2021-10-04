#include "libft.h"

void	ft_bzero(void	*source, size_t	length)
{
	char		*str;
	size_t		i;

	str = (char *) source;
	i = 0;
	if (ft_strlen(str) < length || !length)
		return ;
	else
	{
		while (*(str + i) != '\0' && i < length)
		{
			*(str + i) = '\0';
			i++;
		}
	}
}
