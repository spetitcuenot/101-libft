/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/29 21:13:59 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/29 21:21:30 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mem;
	char			*str;

	i = -1;
	str = (char *)s;
	if (!s || !f)
		return (0);
	if (!(mem = (char *)malloc(sizeof(*s) * (unsigned int)ft_strlen(str) + 1)))
		return (0);
	while (++i < (unsigned int)ft_strlen(str))
		mem[i] = (*f)(i, str[i]);
	mem[i] = '\0';
	return (mem);
}
