/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:53:55 by rroca-go          #+#    #+#             */
/*   Updated: 2022/07/30 16:23:02 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					mark;
	int					i;
	unsigned long int	final_nbr;

	i = 0;
	mark = 1;
	final_nbr = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\t')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			mark = mark * -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		final_nbr = final_nbr * 10 + str[i] - '0';
		i++;
		if (final_nbr > 2147483647 && mark == 1)
			return (-1);
		if (final_nbr > 2147483648 && mark == -1)
			return (0);
	}
	return (final_nbr * mark);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char	str[] = "-12";
	char	str2[] = "-+22-1-";
	printf("atoi str: %i \n", atoi(str));
	printf("ft_atoi str: %i \n", ft_atoi(str));
	printf("atoi str2: %i \n", atoi(str2));
	printf("ft_atoi str2: %i \n", ft_atoi(str2));
}
*/