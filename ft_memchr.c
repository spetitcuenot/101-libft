/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/21 15:57:18 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/21 15:57:35 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*sr1;

	i = 0;
	sr1 = s;
	while (i < n)
	{
		if (sr1[i] == (char)c)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (NULL);
}
