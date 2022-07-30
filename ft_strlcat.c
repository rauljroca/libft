/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:33:43 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/30 12:46:14 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	len = i;
	while (src[i - len] && i + 1 < dstsize)
	{
		dst[i] = src[i - len];
		i++;
	}
	if (len < dstsize)
		dst[i] = '\0';
	return (len + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
    char dst[12] = "Start: ";
    char src[4] = "end.";

    printf("dst1: %s \n src1: %s \n",dst,src);
    ft_strlcat(dst, src, 12);
    printf("dst2: %s \n",dst);

    return(0);
}
*/