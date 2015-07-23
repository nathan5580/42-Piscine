/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_files.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/23 15:52:04 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/23 16:36:08 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define SIZE 64

void	dump(int fd)
{
	char	buf[SIZE];
	int		len;

	while ((len = read(fd, buf[SIZE], SIZE)) > 0)
		write(1, buf, len);
}

int		main(int ac, char **av)
{
	int	fd;

	if (ac == 2)
	{
		if ((fd = open(ac[1], O_RDONLY)) > 0)
			dump(fd);
			close(fd);
	}
	else if (ac == 0)
	{
		write(2, "File name missing.\n", 19);
	}
	else
		write(2, "Too many arguments.\n", 20);
	return 0;
}
