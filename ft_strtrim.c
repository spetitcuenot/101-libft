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
	int		j;
	int		len;
	char	*nstr;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	len = ft_strlen((char *)s);
	if (!(nstr = (char *)malloc(sizeof(*nstr) * len + 1)))
		return (NULL);
	len--;
	while ((s[i]) && ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t')))
		i++;
	while ((s[len]) && ((s[len] == ' ') || (s[len] == '\n')
		|| (s[len] == '\t')))
		len--;
	while (i <= len)
		nstr[j++] = s[i++];
	nstr[j] = '\0';
	return (nstr);
}
