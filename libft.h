/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 11:16:47 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/25 13:12:17 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include <string.h>

void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_atoi(char *str);
int			ft_strncmp(const char *s1, const char *s2, int n);
int			ft_strcmp(const char *s1, const char *s2);
void		ft_putnbr(int nb);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		*ft_strdup(char *src);
int			ft_strlen(char *str);
char		*ft_strstr(char *haystack, char *needle);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
char		*ft_strcat(char *dest, const char *src);
char		*ft_strncat(char *dest, const char *src, size_t n);
int			ft_tolower(char c);
int			ft_toupper(char c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_strlcat(char *dest, const char *src, size_t n);
void		ft_putendl(char *str);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *str, int fd);
void		ft_putnbr_fd(int nb, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_bzero(void *s, size_t n);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);

#endif
