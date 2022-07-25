/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:46:01 by rroca-go          #+#    #+#             */
/*   Updated: 2022/07/25 20:00:08 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 == s2)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	const char s1[] = "abc";
	const char sa2[] = "abb";
	const char sb2[] = "abc";
	const char sc2[] = "abd";
	size_t n = 3;

	printf("%s vs %s ? memcmp: %d\tft_memcmp: %d\n",
		s1, sa2, memcmp(s1, sa2, n), ft_memcmp(s1, sa2, n));
	printf("%s vs %s ? memcmp: %d\tft_memcmp: %d\n",
		s1, sb2, memcmp(s1, sb2, n), ft_memcmp(s1, sb2, n));
	printf("%s vs %s ? memcmp: %d\tft_memcmp: %d\n",
		s1, sc2, memcmp(s1, sc2, n), ft_memcmp(s1, sc2, n));
}
*/