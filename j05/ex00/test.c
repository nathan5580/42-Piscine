/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/14 12:55:46 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/14 16:28:23 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

char *ft_strcpy(char *dest, char *src)
{
	src[0] = dest[0];
	return (0);
}

int main(void)
{
	char str1[] = "hello";
	char str2[] = "Yello";
	ft_putstr(str1);
	ft_putchar('\n');
	ft_strcpy(str1, str2);
	ft_putstr(str2);
	return (0);
}
