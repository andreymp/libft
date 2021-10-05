#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	// ft_isaplha
	if (ft_isalpha('A') == isalpha('A') && ft_isalpha('g') == isalpha('g') && ft_isalpha('5') == isalpha('5') && ft_isalpha('\n') == isalpha('\n') && ft_isalpha(' ') == isalpha(' '))
		printf("ft_isalpha OK\n");
	else
		printf("ft_isalpha ERROR\n");

	// ft_isdigit
	if (ft_isdigit('0') == isdigit('0') && ft_isdigit('5') == isdigit('5') && ft_isdigit('a') == isdigit('a') && ft_isdigit('\n') == isdigit('\n') && ft_isdigit(' ') == isdigit(' '))
		printf("ft_isdigit OK\n");
	else
		printf("ft_isdigit ERROR\n");

	// ft_isalnum
	if (ft_isalnum('0') == isalnum('0') && ft_isalnum('5') == isalnum('5') && ft_isalnum('a') == isalnum('a') && ft_isalnum('\n') == isalnum('\n') && ft_isalnum(' ') == isalnum(' '))
		printf("ft_isalnum OK\n");
	else
		printf("ft_isalnum ERROR\n");

	// ft_isascii
	if (ft_isascii('0') == isascii('0') && ft_isascii('5') == isascii('5') && ft_isascii('a') == isascii('a') && ft_isascii('\n') == isascii('\n') && ft_isascii(128) == isascii(128) && ft_isascii(-1) == isascii(-1))
		printf("ft_isascii OK\n");
	else
		printf("ft_isascii ERROR\n");

	// ft_isprint
	if (ft_isprint(0) == isprint(0) && ft_isprint(31) == isprint(31) && ft_isprint(32) == isprint(32) && ft_isprint(126) == isprint(126) && ft_isprint(127) == isprint(127))
		printf("ft_isprint OK\n");
	else
		printf("ft_isprint ERROR\n");

	// ft_strlen
	if (ft_strlen("") == strlen("") && ft_strlen("123") == strlen("123") && ft_strlen("Hello world!") == strlen("Hello world!"))
		printf("ft_strlen OK\n");
	else
		printf("ft_strlen ERROR\n");

	// ft_memset
	unsigned char src1[15]="1234567890";
	unsigned char src2[15]="1234567890";
	int flag = 1;
   	ft_memset (src1, '1', 10);
	memset (src2, '1', 10);
	for (int i = 0; i < 10; i++)
		if (src1[i] != src2[i])
			flag = 0;
	if (flag)
		printf("ft_memset OK\n");
	else
		printf("ft_memset ERROR\n");

	// ft_bzero
	unsigned char bz1[15]="1234567890";
	unsigned char bz2[15]="1234567890";
	ft_bzero(bz1, 10);
	ft_bzero(bz2, 10);
	flag = 1;
	for (int i = 0; i < 10; i++)
		if (bz1[i] != bz2[i])
			flag = 0;
	if (flag)
		printf("ft_bzero OK\n");
	else
		printf("ft_bzero ERROR\n");


	// ft_memcpy залупа!!!!!!!!!
	
	char buf11[40];
	strcpy(buf11, "Born to code in C/C++.");
	char *buf12 = buf11 + 5;
	memcpy(buf12, buf11, 10);
	char buf21[40];
	strcpy(buf21, "Born to code in C/C++.");
	char *buf22 = buf21 + 5;
	ft_memcpy(buf22, buf21, 10);
	//printf("%s\n", buf12);
	//printf("%s\n", buf22);
	flag = 1;
	for (int i = 0; i < 10; i++)
		if (buf12[i] != buf22[i])
			flag = 0;
	if (flag)
		printf("ft_memcpy OK\n");
	else
		printf("ft_memcpy ERROR\n");

	// // ft_memmove
	char str11[40];
	strcpy(str11, "Born to code in C/C++.");
	char *str12 = str11 + 5;
	memmove(str12, str11, 10);
	char str21[40];
	strcpy(str21, "Born to code in C/C++.");
	char *str22 = str21 + 5;
	ft_memmove(str22, str21, 10);
	// printf("%s\n", str12);
	// printf("%s\n", str22);
	flag = 1;
	for (int i = 0; i < 10; i++)
		if (str12[i] != str22[i])
			flag = 0;
	if (flag)
		printf("ft_memmove OK\n");
	else
		printf("ft_memmove ERROR\n");

	//ft_strlcpy
	char s11[30], s12[12];
	strcpy(s11, "Hello world!fsdffsdfsdf");
	strlcpy(s12, s11, 5);
	// printf("%s\n", s12);
	char s21[30], s22[0];
	strcpy(s21, "Hello world!fsdffsdfsdf");
	ft_strlcpy(s22, s21, 5);
	// printf("%s\n", s22);
	flag = 1;
	for (int i = 0; i < 10; i++)
		if (src1[i] != src2[i])
			flag = 0;
	if (flag)
		printf("ft_strlcpy OK\n");
	else
		printf("ft_strlcpy ERROR\n");

	// ft_strlcat посмотреть!!!
	char s1[50] = "Hello world!";
	char s2[11] = "0123456789";
	strlcat(s1, s2, 50);
	// printf("%s\n", s1);
	char ft_s1[50] = "Hello world!";
	char ft_s2[11] = "0123456789";
	ft_strlcat(ft_s1, ft_s2, 50);
	// printf("%s\n", ft_s1);
	flag = 1;
	for (int i = 0; i < 10; i++)
		if (ft_s1[i] != s1[i])
			flag = 0;
	if (flag)
		printf("ft_strlcat OK\n");
	else
		printf("ft_strlcat ERROR\n");

	// ft_toupper
	if (toupper('a') == ft_toupper('a') && toupper('G') == ft_toupper('G') && toupper('1') == ft_toupper('1') && toupper(1555) == ft_toupper(1555))
		printf("ft_toupper OK\n");
	else
		printf("ft_toupper ERROR\n");

	// ft_tolower
	if (ft_tolower('A') == ft_tolower('A') && tolower('g') == ft_tolower('g') && tolower('1') == ft_tolower('1') && tolower(1555) == ft_tolower(1555))
		printf("ft_tolower OK\n");
	else
		printf("ft_tolower ERROR\n");

	// ft_strchr
	char *chr1 = strchr(s1, 'z');
	char *chr2 = ft_strchr(s1, 'z');
	if (chr1 == chr2)
		printf("ft_strchr OK\n");
	else
		printf("ft_strchr ERROR");
	
	// ft_strrchr
	char *rchr1 = strrchr(s1, 'o');
	char *rchr2 = ft_strrchr(s1, 'o');
	// printf("%s\n", rchr1);
	// printf("%s\n", rchr2);
	if (rchr1 == rchr2)
		printf("ft_strrchr OK\n");
	else
		printf("ft_strrchr ERROR");

	// ft_strncmp
	char sc1[30] = "Hello world!";
	char sc2[30] = "Hello w\200rld!";
	if (strncmp(sc1, sc2, 12) == ft_strncmp(sc1, sc2, 12))
		printf("ft_strncmp OK\n");
	else
		printf("ft_strncmp ERROR\n");

	// ft_memchr
	const char str[] = "http:.//www.tutorialspoint.com";
	if (memchr(str, '.', 12) == ft_memchr(str, '.', 12))
		printf("ft_memchr OK\n");
	else
		printf("ft_memchr ERROR");

	// ft_memcmp
	if (ft_memcmp("Hello world!", "Hello world!gfcgh", 20) >= 0)
		printf("ft_memcmp ERROR 1\n");
	else if (ft_memcmp("Hello w\200rld!", "Hello world!", 12) <= 0)
		printf("ft_memcmp ERROR 2\n");
	else if (ft_memcmp("Hello w\200rld!", "Hello world!", 0) != 0)
		printf("ft_memcmp ERROR 3\n");
	else
		printf("ft_memcmp OK\n");

	// ft_strnstr
	if (strnstr("addc", "dd", 3) != ft_strnstr("addc", "dd", 3))
		printf("ft_strnstr ERROR 1\n");
	else if (strnstr("addc", "dd", 2) != ft_strnstr("addc", "dd", 2))
		printf("ft_strnstr ERROR 2\n");
	else
		printf("ft_strnstr OK\n");
	
	// ft_atoi доделать
	//printf("%d\n", ft_atoi("     \t\r\n\v\f +2147483642"));

	// ft_calloc
	flag = 1;
	int *arr = ft_calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++)
		if (arr[i] != '\0')
			flag = 0;
	if (flag)
		printf("ft_calloc OK\n");
	else
		printf("ft_calloc ERROR\n");

	// ft_strdup
	char *st1 = "Hello world!";
	char *st2 = ft_strdup(st1);
	flag = 1;
	for (int i = 0; i < ft_strlen(st1); i++)
		if (st1[i] != st2[i])
			flag = 0;
	if (flag)
		printf("ft_strdup OK\n");
	else
		printf("ft_strdup ERROR\n");
}