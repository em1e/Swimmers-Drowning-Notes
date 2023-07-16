/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 05:08:06 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/14 06:12:11 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (nb / i == i)
		return (i);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	int nb = 2147395600;
	int nb2 = 8;

	printf("Test 1: The square root of %d is %d \n", nb, ft_sqrt(nb));
	printf("Test 2: The square root of %d is %d \n", nb2, ft_sqrt(nb2));
	return (0);
}*/
