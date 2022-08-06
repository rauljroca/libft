/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:34:13 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/06 20:06:22 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
#include <string.h>
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char	c[] = "ABC";
	printf("%s -> %d - lenght \n", c, ft_strlen(c));	
	printf("%s -> %lu - strlen \n", c, strlen(c));	
	char	c2[] = " B ";
	printf("%s -> %d - lenght \n", c2, ft_strlen(c2));
	printf("%s -> %lu - strlen \n", c2, strlen(c2));	
	char	c3[] = "a";
	printf("%s -> %d - lenght \n", c3, ft_strlen(c3));
	printf("%s -> %lu - strlen \n", c3, strlen(c3));	
	char	c4[] = " ";
	printf("%s -> %d - lenght \n", c4, ft_strlen(c4));
	printf("%s -> %lu - strlen \n", c4, strlen(c4));	
}
*/