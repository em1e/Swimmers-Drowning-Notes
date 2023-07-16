/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferdous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:22:47 by aferdous          #+#    #+#             */
/*   Updated: 2023/07/02 14:52:36 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar();

void	rush(int x, int y)
{
	int	i;
	int	width_midlen;
	int	height_midlen;

	width_midlen = x - 2;
	height_midlen = y - 2;
	i = 0;
	if (x >= 1)
	{
		ft_putchar('/');
		i = first_if(x, i, width_midlen);
		second_if(y, x, width_midlen, height_midlen);
		ft_putchar('\n');
	}
}

int	first_if(int x, int i, int width_midlen)
{	
	if (x > 2)
	{
		i = part_1(i, width_midlen);
	}
	return (0);
}

int	part_1(int i, int width_midlen)
{
	while (i < width_midlen)
	{
		ft_putchar('*');
	i++;
	}
	i = 0;
	ft_putchar("\\");
	return (i);
}

int	second_if(int y, int x, int width_midlen, int height_midlen)
{
	int	i;

	i = 0;
	if (y > 1)
	{
		ft_putchar("\n");
		if (y > 2)
		{
			part_2(width_midlen, height_midlen, x);
		}
		ft_putchar("\\");
		while (i < width_midlen)
		{
			ft_putchar('*');
			i++;
		}
		i = 0;
		if (x > 1)
		{
			ft_putchar('/');
		}
	}
	return (0);
}

void	part_2(int width_midlen, int height_midlen, int x)
{
	int	a;
	int	j;

	j = 1;
	a = 0;
	while (j <= height_midlen)
	{
		ft_putchar('*');
		while (a < width_midlen)
		{
			ft_putchar(' ');
		a++;
		}
		if (x > 1)
		{
			ft_putchar('*');
		}
		ft_putchar("\n");
		j++;
		a = 0;
	}
}
