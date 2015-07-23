/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 23:39:55 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/17 01:05:58 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_rot42(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i] < 107)
				(str[i] += 16);
			else
				(str[i] -= 10);
		}
		if (str[i] >= 65 && str[i] <= 90)
		{
			if (str[i] < 75)
				(str[i] += 16);
			else
				(str[i] -= 10);
		}
		i++;
	}
	return (str);


}
