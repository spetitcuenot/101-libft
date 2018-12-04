/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/31 02:15:55 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/31 02:17:12 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		j;
	int		i;
	int		k;

	i = 0;
	j = 0;
	k = -1;
	if (!s)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_cword((char *)s, c) + 1))))
		return (NULL);
	while (++k < (ft_cword((char *)s, c)))
	{
		while ((s[i] == c) && (s[i] != '\0'))
			i++;
		j = i;
		tab[k] = ft_strsub(s, j, ft_strlen_c((char *)s + i, c));
		while ((s[i] != c) && (s[i] != '\0'))
			i++;
		j = 0;
	}
	tab[k] = (char *)'\0';
	return (tab);
}
