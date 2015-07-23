/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 12:22:24 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/16 23:04:50 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_print_program_name(int n, char **argv)
{
	int i;

	i = i;
	while (i < n)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{

	ft_print_program_name(argc, argv);
	return (0);
}*/

#include <unistd.h>

void	ft_putchar(char c)
		{
			write(1, &c, 1);
		}

void	ft_print_program_name(char *argv)
{
		int index;

		index = 0;
		while (argv[index] != '\0')
		{
			ft_putchar(argv[index]);
			index++;
		}
}

int		main(int argc, char **argv)
{
		ft_print_program_name(argv[0]);
		ft_print_program_name(argv[1]);
		ft_putchar('\n');
		return (0);
}
