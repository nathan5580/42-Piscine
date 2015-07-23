/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 19:03:24 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/15 22:12:57 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] == to_find[i])
	{
		j = k;
		i = 0;
		while (str[k] == to_find[i])
		{
			j++;
			i++;
			if (to_find[i] == '\0')
			{
				return (&str[j]);
			}
		}
		j++;
	}
	return (0);
}
