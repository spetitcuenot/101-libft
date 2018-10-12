/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 11:16:47 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 11:58:39 by spetitcu    ###    #+. /#+    ###.fr     */
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
int			ft_strncmp(char *s1, char *s2, unsigned int n);
int			ft_strcmp(char *s1, char *s2);
void		ft_putnbr(int nb);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		*ft_strdup(char *src);
int			ft_strlen(char *str);
char		*ft_strstr(char *str, char *to_find);

#endif
