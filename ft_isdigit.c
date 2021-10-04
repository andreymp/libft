#include "libft.h"

int	ft_isdigit(int	code)
{
	if (code > 47 && code < 58)
		return (code);
	else
		return (0);
}
