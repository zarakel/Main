/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 09:38:03 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/28 14:58:12 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	char *ptr;
	unsigned int i;

	ptr = pointer;
	i = 0;
	while (i < count)
	{
		ptr[i] = value;
		i++;
	}
	
	return (pointer);
}

int	main()
{
	char *ptr;
	size_t count;
	size_t size;
	count = 2;
	size = 2;
	
	ptr = (char *)malloc(sizeof(char) * (size * count));
	ptr = ft_memset(ptr,'0', (size * count));
	printf("%s", ptr);
}
