/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 08:44:18 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/25 11:59:04 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char *st1;
	char *st2;
	size_t i;

	i = 0;
	st1 = (char *)s1;
	st2 = (char *)s2;

	while (i < n && st1)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}
int	main()
{
	char s[] = "Omega";
	char c[] = "Omago";
	printf("%d\n", ft_strncmp(s, c, 4));
}
