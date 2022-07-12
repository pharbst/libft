/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:47:54 by pharbst           #+#    #+#             */
/*   Updated: 2022/05/17 20:47:54 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_buffer {
	int		maxlen;
	int		len;
	int		jlen;
	char	*buffer;
	char	*jstr;
	char	*new_buff;
}	t_buff;

typedef struct s_stack
{
	int				content;
	size_t			index;
	struct s_stack	*next;
}	t_stack;

int			ft_atoi(const char *src);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t n, size_t size);
int			ft_isalnum(int alnumchar);
int			ft_isalpha(int character);
int			ft_isascii(int ascii);
int			ft_isdigit(int digit);
int			ft_isprint(int arg);
void		*ft_memchr(const void *src, int ch, size_t n);
int			ft_memcmp(const void *src, const void *cmp, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *dest, int val, size_t len);
char		*ft_strchr(char *str, int ch);
size_t		ft_strlcat(char *dest, const char *src, size_t len);
size_t		ft_strlcpy(char *dest, char *src, size_t n);
size_t		ft_strlen(const char *s);
int			ft_strncmp(const char *src, const char *cmpstr, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strrchr(char *src, int ch);
int			ft_tolower(int ch);
int			ft_toupper(int ch);
char		*ft_itoa(int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char const *s, int fd);
char		**ft_split(char const *src, char c);
char		*ft_strdup(const char *src);
char		*ft_strjoin(char const *str1, char const *str2);
char		*ft_strtrim(char const *src, char const *set);
char		*ft_substr(char const *src, unsigned int index, size_t len);
char		*ft_strmapi(char *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

long long	ft_atoui(char *src);
t_buff		ft_bufferjoin(t_buff buff);
t_buff		ft_buffinit(void);
char		*ft_chartostr(int c);
char		*ft_itohex(unsigned long i);
char		*ft_ptrtohex(void *ptr);
char		*ft_strjoinchar(char *str, int c);
char		*ft_strjoinfree(char *str1, char *str2);
char		*ft_strlower(char *str);
char		*ft_strupper(char *str);
char		*ft_uitoa(unsigned int n);

void		ft_stackadd_end(t_stack *stack, t_stack *node);
t_stack		*ft_stackadd_front(t_stack *stack, t_stack *newnode);
void		ft_stackdelete(t_stack *stack);
void		ft_stackdel_node(t_stack *node);
t_stack		*ft_stacklast(t_stack *stack);
int			ft_stacklen(t_stack *stack);
t_stack		*ft_stack_new(int content);
t_stack		*ft_stackremove_node(t_stack **stack, size_t index);
t_stack		*ft_stacksearch(t_stack *stack, size_t index);

#endif