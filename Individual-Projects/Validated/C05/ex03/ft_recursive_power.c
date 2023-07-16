/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 04:01:55 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/14 01:59:48 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb = 4;
	int	power = 2;
	int	nb2 = 6;
	int	power2 = 2;

	printf("%d to the power of %d, is ", nb, power);
	printf("%d \n", ft_recursive_power(nb, power));
	printf("%d to the power of %d, is ", nb2, power2);
	printf("%d \n", ft_recursive_power(nb2, power2));
}*/
