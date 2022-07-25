/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:48:10 by rroca-go          #+#    #+#             */
/*   Updated: 2022/07/25 18:11:54 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;
	size_t			j;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	while ((ss1[i] == ss2[i] && ss1[i] != '\0') && i < n)
		i++;
	if (i == n)
		i--;
	j = ss1[i] - ss2[i];
	return (j);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[]  = "abC";
	char	sa2[] = "abB";
	char	sb2[] = "abC";
	char	sc2[] = "abD";
	size_t n;

	n = 6;

	printf("ft_strncmp: %d vs %d \n", ft_strncmp(s1, sa2, n), strncmp(s1, sa2, n));
	printf("ft_strncmp: %d vs %d \n", ft_strncmp(s1, sb2, n), strncmp(s1, sb2, n));
	printf("ft_strncmp: %d vs %d \n", ft_strncmp(s1, sc2, n), strncmp(s1, sc2, n));
}
*/