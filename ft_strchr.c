/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 19:15:02 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 19:15:10 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	if (str[i] != (const char)ft_strlen((char *)str) + 1)
	{
		while (i < ft_strlen((char *)str) + 1)
		{
			if (str[i] == (char)c || '\0')
				return ((char *)str + i);
			i++;
		}
	}
	return (NULL);
}
