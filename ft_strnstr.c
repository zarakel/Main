/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 12:14:20 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/31 12:22:36 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *h;
	char *n;
	size_t j;
	size_t i;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	j = 0;
	while (i < len)
	{
		if (n == '\0')
			return ((char *)haystack);
		while ((h[i] == n[j]) && (n[j] != '\0'))
		{
			i++;
			j++;
		}	
		if (n[j] == '\0')
			return (&h[i - j]);
		else if (n[j] != '\0')
			j = 0;
		i++;
	}
	return (NULL);
}

int	main()
{
	char a[] = "1235 554";
	char b[] = "5";
	printf("%s\n", ft_strnstr(a, b, 3));
	return (0);
}
