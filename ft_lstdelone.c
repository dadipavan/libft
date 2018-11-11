/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:16:06 by tidadi            #+#    #+#             */
/*   Updated: 2018/11/08 20:16:17 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst)
	{
		if ((*alst)->content)
		{
			(del)((*alst)->content, (*alst)->content_size);
			ft_memdel((void**)alst);
		}
	}
}
