#include "libft.h"

int	ft_isprint(int	code)
{
	if (code >= 32 && code < 127)
		return (code);
	else
		return (0);
}
