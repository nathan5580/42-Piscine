/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 23:39:55 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/17 01:01:04 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char *ft_rot42(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i] < 107)
				ft_putchar(str[i] + 16);
			else
				ft_putchar(str[i] - 10);
		}
		if (str[i] >= 65 && str[i] <= 90)
		{
			if (str[i] < 75)
				ft_putchar(str[i] + 16);
			else
				ft_putchar(str[i] - 10);
		}
		i++;
	}
	return (str);


}

int main()
{
	char str[] = "AbCdEfGhIjKlMnOpRsTuVwXyZ";
	ft_rot42(str);
	return (0);
}
