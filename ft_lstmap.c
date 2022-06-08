/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotak <yotak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:18:58 by yotak             #+#    #+#             */
/*   Updated: 2022/03/17 17:59:08 by yotak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp_lst;
	t_list	*f_lst;

	if (!lst || !f)
		return (NULL);
	tmp_lst = NULL;
	while (lst)
	{
		f_lst = ft_lstnew(f(lst->content));
		if (!f_lst)
		{
			ft_lstclear(&tmp_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&tmp_lst, f_lst);
		lst = lst->next;
	}
	return (tmp_lst);
}
