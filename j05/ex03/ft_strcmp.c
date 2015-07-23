/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 22:36:02 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/15 23:12:00 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			printf("%d", i);
			return (-1);
		if (s1[i] > s2[i])
			printf("%d", i);
			return (1);
		i++;
	}
	printf("%d", i);
	return (0);
}

int main()
{
	char s1[] = "BonjourATous";
	char s2[] = "Nan";
	ft_strcmp(s1, s2);;
	return (0);
}
