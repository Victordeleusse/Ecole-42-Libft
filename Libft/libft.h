/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:58:19 by vde-leus          #+#    #+#             */
/*   Updated: 2022/09/23 16:35:50 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h> 

/* Libc functions */

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char	*big, const char *little, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_atoi(const char *nptr);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);

/* Old functions */

//			char	*ft_strcpy(char *dst, const char *src);
//			char	*ft_strncpy(char *dst, const char *src, size_t len);
//			char	*ft_strcat(char *s1, const char *s2);
//			char	*ft_strncat(char *dst, const char *src, size_t n);
//			int		ft_strcmp(const char *s1, const char *s2);
//			char	*ft_strstr(const char *dst, const char *src);
//			void	*ft_memalloc(size_t size);
//			void	ft_memdel(void **ap);
//			char	*ft_strnew(size_t size);
//			void	ft_strdel(char **as);
//			void	ft_strclr(char *s);
//			void	ft_striter(char *s, void (*f)(char *));
//			void	ft_striteri(char *s, void (*f)(unsigned int, char *));
//			char	*ft_strmap(char const *s, char (*f)(char));

/* Additionnal functions */

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* Partie bonus */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **alst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/* Printf Annexes functions */

size_t	ft_putstr(char *str);
size_t	ft_putnbr(int nbr);
size_t	ft_putchar(char c);
size_t	ft_strlen(char *str);
size_t	ft_putadress_min_hex(void *entree);
size_t	ft_putnbr_hexmin(int nbr);
size_t	ft_putnbr_hexmaj(int nbr);
size_t	ft_put_unsnbr(unsigned int nbr);

#endif
