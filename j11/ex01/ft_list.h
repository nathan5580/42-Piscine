/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 16:29:53 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/23 19:15:46 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef	struct			s_list
{
	struct s_list		*next;
	void				*data;
}						t_list;

void					ft_list_push_back(t_list **begin_list, void *data);
t_list					*ft_create_elem(void *data);

#endif
