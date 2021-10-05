#include "libft.h"

int	ft_isdigit(int	code)
{
	if (code > 47 && code < 58)
		return (1);
	else
		return (0);
}
