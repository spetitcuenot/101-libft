/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/13 02:57:04 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/13 03:15:19 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;

	if (!*alst)
		return ;
	list = (*alst)->next;
	while (*alst)
	{
		list = (*alst)->next;
		(*del)((*alst)->content, 0);
		free(*alst);
		*alst = NULL;
		*alst = list;
	}
}
