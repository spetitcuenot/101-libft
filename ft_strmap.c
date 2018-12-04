/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/29 17:32:54 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/29 17:43:32 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*mem;
	char	*str;

	i = -1;
	str = (char *)s;
	if (!s || !f)
		return (0);
	if (!(mem = (char *)malloc(sizeof(*s) * ft_strlen(str) + 1)))
		return (0);
	while (str[++i])
		mem[i] = (*f)(str[i]);
	mem[i] = '\0';
	return (mem);
}
