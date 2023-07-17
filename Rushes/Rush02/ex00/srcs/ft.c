/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:16:48 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/16 14:05:19 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strlen(char *str, char term)
{
	int	i;

	i = 0;
	while (*str != 0 && *str != term)
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_atoui(char *str)
{
	unsigned int	num;

	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
	{
		str++;
	}
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += (*str - '0');
		str++;
	}
	return (num);
}

int	ft_atoi(char *str)
{
	int	num;
	int	neg;

	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
	{
		str++;
	}
	neg = 1;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += (*str - '0');
		str++;
	}
	return (num * neg);
}
