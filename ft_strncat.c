/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 15:13:44 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 15:14:45 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	j;

	len = ft_strlen(s1);
	j = 0;
	while ((s2[j]) && (j < n))
	{
		s1[len] = s2[j];
		j++;
		len++;
	}
	s1[len] = '\0';
	return (s1);
}
