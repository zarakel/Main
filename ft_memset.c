/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 09:38:03 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/23 11:16:34 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h>

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
	char str[] = "Bonjour";
	ft_memset(str, '.', 2);
	printf("%s", str);
	return (0);
}