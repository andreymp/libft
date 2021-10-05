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
void		*ft_memcpy(void	*dest, const void	*src, size_t	num);
void		*ft_memmove(void	*dest, const void	*src, size_t	num);
int			ft_toupper(int	code);
int			ft_tolower(int	code);
char		*ft_strchr(const char	*str, int code);
char		*ft_strrchr(const char	*str, int code);
int			ft_strncmp(const char	*s1, const char *s2, size_t	n);
int			ft_memcmp(const void	*s1, const void	*s2, size_t	n);
char		*strnstr(const char	*big, const char	*little, size_t	len);
int			ft_atoi(const char	*nptr); //fix
size_t		ft_strlcpy(char	*dest, const char	*src, size_t	size);
size_t		ft_strlcat(char	*dest, const char	*src, size_t	size); //fix
void		*ft_calloc(size_t	nmemb, size_t	size); //ask
char		*ft_strdup(const char	*str);
void		*ft_memchr(const void	*str, int	code, size_t	n);

#endif