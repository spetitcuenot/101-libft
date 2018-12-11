/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/30 23:19:35 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/30 23:35:39 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*nstr;

	i = 0;
	if (!s)
		return (NULL);
	while ((s[i]) && ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t')))
		i++;
	len = ft_strlen((char *)s);
	len--;
	if (i < len)
	{
		while ((s[len]) && ((s[len] == ' ') || (s[len] == '\n')
			|| (s[len] == '\t')))
			len--;
		nstr = ft_strsub(s, i, ((len + 1) - i));
		return (nstr);
	}
	else
		nstr = ft_strsub(s, i, ((len + 1) - i));
	return (nstr);
}
