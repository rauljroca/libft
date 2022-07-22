/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:38:22 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/22 21:38:24 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c) {

	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));

}
/*
// gcc -Wall -Wextra -Werror ft_isalpha.c -L. -lft && ./a.out
int	main(void)
{
	char c = 'a';
	printf("%c -> %d - 1 is alpha; 2 no alpha \n", c, ft_isalpha(c));
	char c2 = '3';
	printf("%c -> %d - 1 is alpha; 0 no alpha \n", c2, ft_isalpha(c2));
	return (0);
}
*/