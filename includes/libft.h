#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_isdigit(int ch);
int		ft_isalpha(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);
int		ft_toupper(int ch);
int		ft_tolower(int ch);

void	*ft_memset(void *buf, int ch, size_t len);
void	ft_bzero(void *buf, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *buf, int ch, size_t len);
int		ft_memcmp(const void *b1, const void *b2, size_t len);

size_t  ft_strlen(const char *str);
char	*ft_strchr(const char *str, int ch);
char    *ft_strrchr(const char *str, int ch);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, char *src, size_t dstsize);
int		ft_strncmp(char *s1, char *s2, size_t len);
char	*ft_strnstr(char *str, char *to_find, size_t len);
char	*ft_strdup(char *str);

void	*ft_calloc(size_t number, size_t size);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
#endif
