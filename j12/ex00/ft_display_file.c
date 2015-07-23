/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/23 14:35:22 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/23 16:42:05 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft.h"
#define SIZE 8192

void	dump(int fd)
{
	char	buf[SIZE];
	int		len;

	while ((len = read(fd, buf, SIZE)) > 0)
		write(1, buf, len);
}

int		main(int ac, char **av)
{
	int		fd;

	if (ac == 2)
	{
		if ((fd = open(av[1], O_RDONLY)) > 0)
		{
			dump(fd);
			close(fd);
		}
		else
			write(2, "Can't open file.\n", 17);
	}
	else if (ac == 1)
		write(2, "File name missing.\n", 19);
	else
		write(2, "Too many arguments.\n", 20);
	return (0);
}
