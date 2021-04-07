/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 18:49:00 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/29 18:31:11 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(ptr) * (count * size));
	if (!ptr)
		return (NULL);
	return (ptr);
}

int	main()
{
	size_t c = 2;
	size_t s = 10;
	printf("%s", ft_calloc(c, s));
}
