/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 11:40:51 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/26 16:26:50 by jbuan            ###   ########.fr       */
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

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	return;
}

int	main()
{
	void	*content;
	char	*s;
	char	*st;
	char	*str;
	char	*stri;
	t_list	*list;
	t_list	*alst;

	list = NULL;
	alst = list;
	s = "Chapeau\n";
	st = "Chameau\n";
	str = "Challumeau\n";
	stri = "Chapati\n";
	content = s;
	list = ft_addlink(list, content);
	content = st;
	list = ft_addlink(list, content);
	content = str;
	list = ft_addlink(list, content);
	print_list(list);
	content  = stri;
	printf("taille de notre chaine %d", ft_lstsize(list));
	printf("\nmaillon 1, 2, 3 retourne\n\n");
	list = ft_addlink(list, content);
	ft_lstadd_front(&alst, list);
	print_list(list);

}
