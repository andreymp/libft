# libft (42 project)
First library with some recoded functions from libc and other external ones (Definition of project is on branch "master")
## Functions from "libc"
1. isalpha
2. isdigit
3. isalnum
4. isascii
5. isprint
6. strlen
7. memset
8. bzero
9. memcpy
10. memmove
11. strlcpy
12. strlcat
13. toupper
14. tolower
15. strchr
16. strrchr
17. strncmp
18. memchr
19. memcmp
20. strnstr
21. atoi
22. calloc
23. strdup
## Other functions that are not from libc
### ft_substr (char *ft_substr(char const *s, unsigned int start, size_t len))

It's aim to allocate a substring from a string.
### ft_strjoin (char *ft_strjoin(char const *s1, char const *s2))
It's aim to allocate string made from 2 strings.

### ft_strtrim (char *ft_strtrim(char const *s1, char const *set))

It's aim to allocate trimmed from left to right string. Chars that must bu trimmed are in set, given as argument.
### ft_split (char **ft_split(char const *s, char c))

It's aim to split string with given separator and allocate array of resulting substrings.
### ft_itoa (char *ft_itoa(int n))

It's aim to allocate string that is result of converting an integer, given as argument.
### ft_strmapi (char *ft_strmapi(char const *s, char (*f)(unsignedint, char)))

It's aim to aplly function given as argumnet to each character of a string. It returns new allocated string resulting from succesive application of a function.
### ft_striteri (void ft_striteri(char *s, void (*f)(unsigned int, char*)))

It's aim to aplly function given as argumnet to each character of a string.
### ft_putchar_fd (void ft_putchar_fd(char c, int fd)), ft_putstr_fd (void ft_putstr_fd(char *s, int fd)), ft_putendl_fd (void ft_putendl_fd(char *s, int fd)), ft_putnbr_fd (void ft_putnbr_fd(int n, int fd))

1. ft_putchar_fd: Outputs the character to the given file descriptor.
2. ft_putstr_fd: Outputs the string to the given file descriptor.
3. ft_putendl_fd: Outputs the string to the given file descriptor, followed by a new line.
4. ft_putnbr_fd: Outputs the integer to the given file descriptor.

## Bonus functions (linked with lists)
### ft_lstnew

Allocates and returns a new element of list.
### ft_lstadd_front

Adds the element at the beginning of the list.
### ft_lstsize

Counts the number of elements in a list.
### ft_lstlast

Returns the last element of the list.
### ft_lstadd_back

Adds the element at the end of the list.
### ft_lstdelone

Free the element given as a parameter, and free the content of the element using the function given as a parameter.
### ft_lstclear

Free list. The first element ginven as parameter.

### ft_lstiter

It's aim to aplly function given as argumnet to each content of the list.
### ft_lstmap

It's aim to aplly function given as argumnet to each content of the list. It returns new list resulting from succesive application of a function.
