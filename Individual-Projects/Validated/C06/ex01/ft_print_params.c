/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:00:00 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/12 17:01:36 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	fnum;

	fnum = 1;
	i = 0;
	if (argc > 0)
	{
		while (fnum < argc)
		{
			while (argv[fnum][i] != '\0')
			{
				ft_putchar(argv[fnum][i]);
				i++;
			}
			ft_putchar('\n');
			fnum++;
			i = 0;
		}
	}
	return (0);
}
