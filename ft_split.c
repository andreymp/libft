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
		{
			while (*(s + i) == c)
				i++;
			size++;
		}
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
	int		len;

	if (!s)
		return (0);
	strs = (char **) malloc(get_size(s, c) * sizeof(char *));
	if (!strs)
		return (0);
	j = 0;
	i = 0;
	while (*(s + i))
	{
		len = 0;
		while (*(s + i) && *(s + i) == c)
			i++;
		while (*(s + i) && *(s + i) != c)
		{
			len++;
			i++;
		}
		if (len > 0)
			strs[j++] = ft_substr(s, i - len, len);
		i++;
	}
	strs[j] = 0;
	return (strs);
}
/*
int main()
{
	char **strs = ft_split("my name is hey", 0);
	int i = 0;

	while (strs[i])
	{
		puts(strs[i]);
		free(strs[i]);
		i++;
	}
	free(strs);
}
*/