/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_place.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 18:02:51 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/17 13:16:25 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_take_place(int hour)
{
	if (hour <= 24 && hour >= 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	{
		if (hour > 12 && hour != 23)
			printf("%d.00 P.M AND %d.00 P.M\n", hour - 12, hour - 11);
		if (hour == 23)
			printf("%d.00 P.M AND %d.00 A.M\n", hour - 12, hour - 11);
		if (hour < 12 && hour != 11 && hour != 0)
			printf("%d.00 A.M AND %d.00 A.M\n", hour, hour + 1);
		if (hour == 11)
			printf("%d.00 A.M AND %d.00 P.M\n", hour, hour + 1);
		if (hour == 0)
			printf("%d.00 A.M AND %d.00 A.M\n", 12, hour + 1);
		if (hour == 24)
			printf("%d.00 A.M AND %d.00 A.M\n", hour, hour - 23);
		if (hour == 12)
			printf("%d.00 P.M AND %d.00 A.M\n", hour, hour - 11);
	}
}
