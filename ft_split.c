#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	get_size(char const	*s, char	c)
{
	int	size;
	int	i;

	size = 1;
	i = 0;
	while (*(s + i) == c)
		i++;
	while (*(s + i))
	{
		if (*(s + i) == c)
			size++;
		i++;
	}
	size++;
	return (size);
}

char	**ft_split(char const	*s, char	c)
{
	char	**strs;
	int		i;
	int		j;
	int		co;

	strs = (char **) malloc(get_size(s, c) * sizeof(char *));
	i = 0;
	co = 0;
	while (*(s + i) == c)
		i++;
	j = i;
	while (*(s + i))
	{
		if (*(s + i) == c && *(s + i + 1) != c)
		{
			if (!co)
				strs[co++] = ft_substr(s, j, i - j);
			else
			{
				j = i;
				i++;
				while (*(s + i) != c)
					i++;
				strs[co++] = ft_substr(s, j + 1, i - j - 1);
				i--;
			}
		}
		else
			i++;
	}
	strs[co] = 0;
	return (strs);
}
