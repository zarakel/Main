/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 11:40:51 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/23 14:31:42 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "bonus.h"

t_list	*ft_addlink(t_list *list, void *content)
{
	t_list	*manipuleList;

	manipuleList = malloc(sizeof(t_list));
	if (manipuleList)
	{
		manipuleList->content = content;
		manipuleList->next = list;
	}
	return (manipuleList);
}

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr_fd(list->content, 2);
		list = list->next;
	}
}

int	main()
{
	void	*content;
	char	*s;
	char	*st;
	char	*str;
	t_list	*list;

	list = NULL;
	s = "Chapeau\n";
	st = "Chameau\n";
	str = "Challumeau\n";
	content = s;
	list = ft_addlink(list, content);
	content = st;
	list = ft_addlink(list, content);
	content = str;
	list = ft_addlink(list, content);
	print_list(list);
}
