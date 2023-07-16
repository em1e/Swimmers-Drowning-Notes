/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 03:38:42 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/14 01:58:18 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power != 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	int nb = 4;
	int power = 3;
	int nb2 = 6;
	int power2 = 3;

	printf("%d to the power of %d, is ", nb, power);
	printf("%d \n", ft_iterative_power(nb, power));

	printf("%d to the power of %d, is ", nb2, power2);
	printf("%d \n", ft_iterative_power(nb2, power));
	return (0);
}*/
