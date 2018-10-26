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
	int i;

	i = 0;
	if (str[i] != ft_strlen((char *)str) + 1)
	{
		while (str[i] + 1)
		{
			if (str[i] == (char)c)
				return ((char *)str + i);
			i++;
		}
	}
	return (NULL);
}
