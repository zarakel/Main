/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 11:40:51 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/23 14:12:09 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*manipuleList;

	manipuleList = malloc(sizeof(t_list));
	if (manipuleList)
	{
		manipuleList->content = content;
		manipuleList->next = NULL;
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
	t_list	*list;

	s = "Chapeau";
	content = s;
	list = ft_lstnew(content);
	print_list(list);
}
