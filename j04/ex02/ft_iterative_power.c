/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 15:05:12 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/13 17:39:44 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int valeur;

	valeur = 1;
	while (power != 0)
	{
		if (power < 0)
		{
			return (0);
		}
		else
			valeur = valeur * nb;
		--power;
	}
	return (valeur);
}
