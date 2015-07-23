/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/18 09:10:44 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/19 21:31:22 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int z;

	i = 1;
	z = 0;
	write(1, "Sudoku avant:\n", 15);
	while (i < argc)
	{
		while (argv[i][z])
		{
			if (argv[i][z] == '.')
				argv[i][z] = ' ';
			ft_putchar(argv[i][z]);
			ft_putchar('|');
			z++;
		}
		ft_putchar('\n');
		z = 0;
		i++;
	}
	return (0);
}
