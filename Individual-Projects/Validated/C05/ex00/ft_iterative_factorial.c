/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:46:17 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/13 11:45:56 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fct;

	fct = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		fct *= nb;
		nb--;
	}
	return (fct);
}
/*
#include <stdio.h>
int main(void)
{
	int nb = 4;
	int nb2 = 15;

	printf("Factrial of 4, is %d \n", ft_iterative_factorial(nb));
	printf("Factrial of 15, is %d \n", ft_iterative_factorial(nb2));
	return (0);
}*/
