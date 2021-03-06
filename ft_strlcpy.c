/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:29:08 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/20 16:36:03 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t 	i;
	size_t 	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;	
	}
	if (dstsize > 0)	
		dst[i] = '\0';
	printf("%s\n", dst);
	return (j);
}

int	main()
{
	char a[] = "boubi";
	char b[] = "journal";
	printf("%zu\n", ft_strlcpy(a, b, 8));
}
