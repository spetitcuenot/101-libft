/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 15:06:00 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 15:06:08 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	len;
	int	j;

	len = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[len] = src[j];
		j++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
