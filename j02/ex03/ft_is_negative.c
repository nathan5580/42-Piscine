/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/10 11:06:03 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/11 10:57:29 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 2);
}

void		ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
		ft_putchar('N');
}

int		main(void)
{
	ft_is_negative(-1);
	ft_is_negative(1);
	return(0);
}
