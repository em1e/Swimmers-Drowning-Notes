/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:07:19 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/14 06:11:32 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (!(nb % 2 && nb % 3))
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (!(nb % i && nb % (i + 2)))
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	is_prime;

	is_prime = ft_is_prime(nb);
	while (is_prime == 0)
	{
		nb++;
		is_prime = ft_is_prime(nb);
	}
	if (is_prime == 1)
		return (nb);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	int nb = 97; // prints 97
	int nb2 = 3; // prints 3
	int nb3 = 2147483641; // prints 2147483647
	int nb4 = 5242871; // prints 524287

	printf("\nNOTE: Returns the next prime number greater");
   	printf("or equal to the number given as argument \n\n");
	printf("Test 1: %d\n", ft_find_next_prime(nb));
	printf("Test 2: %d\n", ft_find_next_prime(nb2));
	printf("Test 3: %d\n", ft_find_next_prime(nb3));
	printf("Test 4: %d\n", ft_find_next_prime(nb4));
	return (0);
}*/
