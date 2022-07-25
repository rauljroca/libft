/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:26:18 by rroca-go          #+#    #+#             */
/*   Updated: 2022/07/25 14:38:25 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (*p)
	{
		if (*p == (char)c)
			i++;
		p++;
	}
	while (*s)
	{
		if (*s == (char)c && i == 1)
			return ((char *)s);
		if (*s == (char)c)
			i--;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	const char	str[] = "ABC1DEC2FG";
	const char	ch = 'C';
	char			*p;
	char			*p2;

	p = strrchr(str, ch);
	p2 = ft_strrchr(str, ch);
	printf("strrchr:   \t %s a partir de %c es: %s \n", str, ch, p);
	printf("ft_strrchr:\t %s a partir de %c es: %s \n", str, ch, p2);
}
*/