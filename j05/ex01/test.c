/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/14 16:38:46 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/14 17:36:23 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int    x;

	x = 0;
	while(x < n && x < src[x])
	{
		dest[x] = src[x];
		ft_putchar(dest[x]);
		x++;
		//ft_putchar(dest[i]);
        int
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

int main