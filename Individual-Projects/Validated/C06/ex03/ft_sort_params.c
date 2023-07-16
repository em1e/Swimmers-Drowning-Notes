/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:19:11 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/12 16:49:04 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s1[i] != '\0')
		return (1);
	else if (s2[i] != '\0')
		return (-1);
	return (0);
}

void ft_strprint(char *argv[], int num)
{
	int i;

	i = 0;
	while (argv[num][i] != '\0')
	{
		ft_putchar(argv[num][i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	int i;
	int j;
	char *temp;

	i = 1;
	j = 1;
	while (i < argc)
	{
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					temp = argv[j];
					argv[j] = argv[i];
					argv[i] = temp;
					j = i;
				}
				j++;
			}
		ft_strprint(argv, i);
		i++;
	}
	return (0);
}
