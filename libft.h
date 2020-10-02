
#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <stdlib.h>

typedef struct	s_list
{
	void	*content;
	size_t	content_size;
	struct s_list	*next;
}		t_list;

int	ft_atoi(char *str);
void	ft_bzero(char *s, size_t n);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
char	*ft_itoa(int nbr);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *s1, const void *s2,int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	memcmp(const void *str1,const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void 	ft_memdel(void **ap);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
char 	*ft_strcat(char *dest, char *src);
char	*ft_strchr(const char *string, int c);
void	ft_strclr(char *s);
int	ft_strcmp(const char *s1, const char *s2);
void	ft_strdel(char **as);
char	*ft_strdup(char *src);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(int size, char **strs, char *sep);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int	ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, int nb);
int	ft_strncmp(char *s1,char *s2,unsigned int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strnew(size_t size);
char	*ft_strmap(char const *s, char (*)(char));
char	*ft_strnstr(char *str, char *to_find, size_t len);
char	*ft_strrchr(char *str, int ch);
char	*ft_strstr(char *str, char *to_find);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_strequ(char const *s1,char const *s2);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int , char));
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
char	*ft_strcpy(char *dest, char *src);
t_list *ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int	ft_startswith(char *str, char *target, int lenth);
char** ft_strsplit(char*,char*);
#endif
