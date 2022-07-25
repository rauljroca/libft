/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:02:52 by rroca-go          #+#    #+#             */
/*   Updated: 2022/07/26 00:46:58 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	int				j;

	j = 0;
	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] && i < len)
		{
			i++;
			j++;
		}
		if (!needle[j])
			return ((char *)&haystack[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	const	char *largestring = "Foo Bar Baz";
	const	char *smallstring = "Bar";
	size_t	len = 8;
	char *ptr;
	char *ptr2;

	ptr = strnstr(largestring, smallstring, len);
	ptr2 = ft_strnstr(largestring, smallstring, len);
	printf("\nstrnstr is  \t%s \n", ptr);
	printf("\nft_strnstr is\t%s \n", ptr2);
}
*/