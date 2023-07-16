/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:04:51 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/16 10:21:36 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#include "dict.h"
#include "ft.h"

void	print_dict(t_dict	*dict, int n)
{
	int	i;

	i = 0;
	while (dict[i].str != 0)
	{
		if (dict[i].num == n)
			ft_putstr(dict[i].str);
		i++;
	}
	ft_putstr(" ");
}

void	print_small(t_dict *dict, int nb)
{
	int	n;

	//printf("prinsmall = %d\n", nb);
	if (nb >= 100)
	{
		n = nb / 100;
		//printf("test 0: %d\n", n);
		print_dict(dict, n);
		print_dict(dict, 100);
		nb = nb % 100;
	}
	//printf("pprinsmaal 10 = %d\n", nb);
	if (nb < 20 && nb > 9)
	{
		//printf("test teini: %d\n", nb);
		print_dict(dict, nb);
		return ;
	}
	if (nb > 19)
	{
		n = (nb / 10) * 10;
		//printf("test kymppi: %d\n", n);
		print_dict(dict, n);
		nb = nb % 10;
	}
	//printf("prinsmal 1 = %d\n", nb);
	if (nb > 0)
	{
		//printf("test 7: %d\n", nb);
		print_dict(dict, nb);
	}
}

void	print_big(t_dict *dict, int nb, int size)
{
	int	n;

	n = nb / size;
	//printf("test A: n = %d, size = %d\n", n, size);
	n = n % 1000;
n = (nb / 10) * 10;	//printf("test B: %d\n", n);
	print_small(dict, n);
	print_dict(dict, size);
}

void	find_num(t_dict	*dict, int nb)
{
	if (nb == 0)
	{
		print_dict(dict, nb);
		return ;
	}
	if (nb >= 1000000000)
		print_big(dict, nb, 1000000000);
	//printf("test 1: %d\n", nb);
	if (nb >= 1000000)
		print_big(dict, nb, 1000000);
	//printf("test 2: %d\n", nb);
	if (nb >= 1000)
		print_big(dict, nb, 1000);
	//printf("test 3: %d\n", nb);
	print_small(dict, nb % 1000);
	ft_putstr("\n");
}
