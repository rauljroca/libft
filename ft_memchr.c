/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:42:44 by rroca-go          #+#    #+#             */
/*   Updated: 2022/07/25 18:40:49 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	const char s[] = "abcde";
	const int	c = 'c';
	size_t n = 4;
	char *ret = memchr(s, c, n);
	char *ret2 = ft_memchr(s, c, n);
	printf("%s; después de %c: %s \n", s, (char)c, ret);
	printf("%s; después de %c: %s \n", s, (char)c, ret2);
}
*/