/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 07:00:38 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/14 02:04:55 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	is_prime;
	int	i;

	i = 2;
	is_prime = nb / i;
	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % i == 0 && i <= is_prime)
		return (0);
	i = 3;
	while (nb % i != 0 && i < nb && nb > 2)
	{
		if (i + 2 == nb)
			return (1);
		i += 2;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	int nb = 97; // is prime
	int nb2 = 24; // not prime
	int nb3 = 0; // not prime
	int nb4 = 524287; // is prime number

	printf("NOTE: Print '1' if number is a prime number, and '0' if not \n\n");
	printf("Test 1: %d\n", ft_is_prime(nb));
	printf("Test 2: %d\n", ft_is_prime(nb2));
	printf("Test 3: %d\n", ft_is_prime(nb3));
	printf("Test 4: %d\n", ft_is_prime(nb4));
	return (0);
}*/
