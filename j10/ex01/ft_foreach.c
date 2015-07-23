/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 15:56:35 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/22 11:20:41 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_foreach(int *tab, int lenght, int (*f)(int))
{
	int i;
	int *tab2;

	i = 0;
	tab2 = malloc(sizeof(int*) * lenght);
	while (i < lenght)
	{
		tab2[i] = f(tab[i]);
		i++;
	}
}
