/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 15:19:32 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/17 23:07:43 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src)
{
	int i;
	char *str2;

	i = 0; 
	str2 = (char*)malloc (sizeof(char*) * (i - 1));
	while (src[i] != '\0')
	{
		str2[i] = src[i];
		i++;
	}
	*str2 = '\0';
	return (str2);
}

int main()
{
	char str[] = "LeC#c'estNul";
	printf("%s\n", ft_strdup(str));
	printf("%s\n", strdup(str));
	return 0;
}
