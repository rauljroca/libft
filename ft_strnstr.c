/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:02:52 by rroca-go          #+#    #+#             */
/*   Updated: 2022/07/25 20:21:59 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;
	size_t			j;

	ss1 = (unsigned char *)haystack;
	ss2 = (unsigned char *)needle;
	i = 0;
	j = 0;
	if (len == 0)
		return (0);
	while ((ss1[i] == ss2[i] && ss1[i] != '\0') && i < len)
		i++;
	if (i == len)
		i--;
	j = ss1[i] - ss2[i];
	return (j);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = strnstr(largestring, smallstring, 8);
	printf("ptr: %s \n", ptr);
}
