/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/14 15:20:34 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/14 15:32:30 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*nlist;
	t_list	*elem;

	nlist = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		elem = ft_lstnew(lst->content, lst->content_size);
		elem = (*f)(lst);
		ft_lstaddend(&nlist, elem);
		lst = lst->next;
	}
	return (nlist);
}
