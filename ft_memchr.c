/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:53:51 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/27 18:09:03 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;

	str = (char *)s;
	if (n == 0)
		return (0);
	while (*str != n)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}

int	main()
{
	char st[] = "/|\x12\xff\x09\x42\042\42|\\";
	int a = '\x42';
	printf("%s\n", ft_memchr(st, a, 2));

}
