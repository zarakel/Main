/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:21:24 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/24 12:31:29 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void 	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
	char *tmp;
	unsigned int i;

	d = dst;
	i = 0;
	while (i < n)
	{
		*tmp = *(char *)src;
		*d = *tmp;
		src++;
		tmp++;
		d++;
		i++;
	}
	return (dst);
}

int	main()
{
	char dst[] = "Biere";
	char src[] = "Canne";
	ft_memmove(dst, src, 2);
	printf("%s", dst);
}
