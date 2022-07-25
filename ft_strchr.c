/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:21:30 by rroca-go          #+#    #+#             */
/*   Updated: 2022/07/25 12:21:35 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
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
   const char	str[] = "ABCDEFG";
   const char	ch = 'C';
   char			*p;
   char			*p2;

   p = strchr(str, ch);
   p2 = ft_strchr(str, ch);
   printf("strchr:    \t %s a partir de %c es: %s \n", str, ch, p);
   printf("ft_strchr: \t %s a partir de %c es: %s \n", str, ch, p2);
}*/