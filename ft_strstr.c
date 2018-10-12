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

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int find;

	i = 0;
	j = 0;
	while (to_find[j])
		j++;
	find = j;
	if (to_find[0] == str[0] || to_find[0] == 0)
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if (j == find - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
