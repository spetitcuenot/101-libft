/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   strstr.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 15:57:20 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 15:57:21 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int find;

	i = 0;
	j = 0;
	while (needle[j])
		j++;
	find = j;
	if (needle[0] == haystack[0] || needle[0] == 0)
		return (haystack);
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j])
		{
			if (j == find - 1)
				return (haystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
