/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/16 15:33:23 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/16 15:33:30 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	int				j;
	int				find;

	i = 0;
	j = 0;
	find = ft_strlen((char *)needle);
	if (needle[0] != 0)
	{
		while (haystack[i])
		{
			if (i == len)
				return (NULL);
			while (haystack[i + j] == needle[j])
			{
				if ((j == find - 1) && (i + find <= len))
					return ((char *)haystack + i);
				j++;
			}
			j = 0;
			i++;
		}
		return (NULL);
	}
	return ((char *)haystack);
}
