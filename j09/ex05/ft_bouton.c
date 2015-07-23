/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 08:58:27 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/17 09:27:25 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_button(int i, int j, int k)
{
	if (i < k && i > j)
	{
		return (i);
	}
	if (i < j && i > k)
	{
		return (i);
	}
	if (j < k && j > i)
	{
		return (j);
	}
	if (j > k && j < i)
	{
		return (j);
	}
	if (k > i && k < j)
	{
		return (k);
	}
	if (k > j && k < i)
	{
		return (k);
	}
	return (0);
}
