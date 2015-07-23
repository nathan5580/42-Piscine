/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 12:22:24 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/16 17:51:59 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
	int i;

	i = argc;
	ft_print_program_name(argv[0]);
	ft_putchar('\n');
	return (0);
}
