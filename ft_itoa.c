/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 16:59:19 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/20 18:05:33 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*nstr;
	int		size;
	long	sn;

	sn = n;
	size = ft_intlen(sn);
	if (!(nstr = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	if (sn < 0)
		sn = sn * -1;
	nstr[size] = '\0';
	while (--size >= 0)
	{
		nstr[size] = (sn % 10) + '0';
		sn = sn / 10;
	}
	if (n < 0)
		nstr[0] = '-';
	return (nstr);
}
