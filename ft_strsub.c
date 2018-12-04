/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/29 22:25:07 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/29 22:30:44 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*mem;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (!(mem = (malloc(sizeof(*mem) * len + 1))))
		return (0);
	while (s[i] && (i < start + len))
		mem[j++] = s[i++];
	mem[j] = '\0';
	return (mem);
}
