#include "libft.h"

int	ft_isalnum(int	code)
{
	if (ft_isdigit(code) || ft_isalpha(code))
		return (code);
	else
		return (0);
}
