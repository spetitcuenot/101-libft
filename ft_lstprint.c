/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstprint.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/05 15:03:33 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/05 15:07:17 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list *list)
{
	if (list == NULL)
		return ;
	while (list)
	{
		ft_putstr(list->content);
		write(1, "\n", 1);
		ft_putnbr(list->content_size);
		write(1, "\n", 1);
		list = list->next;
	}
}
