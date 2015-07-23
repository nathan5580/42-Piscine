/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/10 07:44:13 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/10 08:10:53 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_print_alphabet(void)
{
	int i;

	i = 'z';
	while (i >= 'a')
	{
		ft_putchar(i);
		i = i - 1;
	}
}

int			main(void)
{
	ft_print_alphabet();
	return (0);
}
