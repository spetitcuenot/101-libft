/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/28 11:53:40 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/28 11:56:10 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void *mem;

	if (!(mem = malloc(sizeof(*mem) * (size + 1))))
		return (NULL);
	return (ft_memset(mem, 0, size + 1));
}
