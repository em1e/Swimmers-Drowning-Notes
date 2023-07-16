/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:26:08 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/12 08:35:46 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		write(1, &a, 1);
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	char *str1;
	char *str2;


	str1 = "uygdhbjekhhgjgyu45677";
	str2 = "123456";

	ft_putstr(str1);
	printf("\n");
	ft_putstr(str2);
	return (0);
}*/
