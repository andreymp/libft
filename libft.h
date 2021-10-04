#ifndef LIBFT_H
#define LIBFT_H

typedef unsigned long size_t;

int			ft_isalpha(int	code);
int			ft_isdigit(int	code);
int			ft_isalnum(int	code);
int			ft_isascii(int	code);
int			ft_isprint(int	code);
size_t		ft_strlen(const char	*str);
void		*ft_memset(void	*source, int	code, size_t	length);
void		ft_bzero(void	*str, size_t	length);
void		*ft_memcpy(void	*dest, const void	*src, size_t	num); //fix
void		*ft_memmove(void	*dest, const void	*src, size_t	num); //fix
int			ft_toupper(int	code);
int			ft_tolower(int	code);
char		*ft_strchr(const char	*str, int code); //fix

#endif