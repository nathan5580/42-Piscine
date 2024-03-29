/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/14 12:55:46 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/14 13:47:40 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char *ft_strcpy(char *dest, char *src);
{
	char str1[] = "hello";
	ft_putstr(str1);
	ft_putchar('\n');
	return (0);
}
