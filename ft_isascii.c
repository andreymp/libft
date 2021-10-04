#include "libft.h"

int	ft_isascii(int	code)
{
	if (code >= 0 && code <= 127)
		return (code);
	else
		return (0);
}
