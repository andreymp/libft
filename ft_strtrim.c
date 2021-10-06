#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	left(char const	*s1, char const	*set)
{
	int	i;
	int	j;
	int flag;

	i = 0;
	while (*(s1 + i))
	{
		j = 0;
		flag = 0;
		while (*(set + j))
		{
			if (*(set + j) == *(s1 + i))
			{
				i++;
				flag = 1;
			}
			j++;
		}
		if (!flag)
			break ;
	}
	return (i);
}

static int	right(char const	*s1, char const	*set)
{
	int	i;
	int	j;
	int flag;

	i = ft_strlen(s1) - 1;
	while (*(s1 + i))
	{
		j = 0;
		flag = 0;
		while (*(set + j))
		{
			if (*(set + j) == *(s1 + i))
			{
				i--;
				flag = 1;
			}
			j++;
		}
		if (!flag)
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	int		r;
	int		l;

	r = right(s1, set);
	l = left(s1, set);
	return (ft_substr(s1, l, r - l + 1));
}
