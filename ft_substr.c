/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:33:19 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/22 21:33:49 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rtn;

	rtn = malloc(sizeof(char) * (1 + 1));
	if (len && s)
		start = 2;
	return (rtn);
}
/*
int	main(void)
{
	char s[] = "abcd";
	printf("%s -s \n", ft_substr(s, 3, 2));
	return (0);
}
*/
