/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 16:30:01 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 16:30:18 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int unsigned i;
	int unsigned comp;

	i = 0;
	while (src[i] != '\0')
		i++;
	comp = i;
	i = 0;
	while (n <= comp && i <= (n - 1))
	{
		dest[i] = src[i];
		i++;
	}
	i = 0;
	while ((comp < n) && (i < comp))
	{
		dest[i] = src[i];
		i++;
	}
	while (comp < n)
	{
		dest[comp] = '\0';
		comp++;
	}
	return (dest);
}
