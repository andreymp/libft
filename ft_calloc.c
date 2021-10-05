#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t	nmemb, size_t	size)
{
	void	*res;

	res = (void *) malloc(nmemb * size);
	if (!res)
		return (0);
	ft_bzero(res, nmemb * size);
	return (res);
}
/*
#include <stdio.h>
int main()
{
	int flag = 1;
	int *arr = ft_calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++)
		if (arr[i] != '\0')
			flag = 0;
	if (flag)
		printf("ft_calloc OK\n");
	else
		printf("ft_calloc ERROR\n");
} */