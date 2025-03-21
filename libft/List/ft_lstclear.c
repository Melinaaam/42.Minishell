/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:36:26 by uzanchi           #+#    #+#             */
/*   Updated: 2024/11/18 12:19:13 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list_bonus **lst, void (*del)(void *))
{
	t_list_bonus	*buffer;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		buffer = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = buffer;
	}
	*lst = NULL;
}
