/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 03:06:55 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/14 01:56:47 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int main(void)
{
	int nb = 4;
	int nb2 = 15;

	printf("Factrial of 4, is %d \n", ft_recursive_factorial(nb));
	printf("Factrial of %d, is %d \n", nb2, ft_recursive_factorial(nb2));
	return (0);
}*/
