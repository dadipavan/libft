/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:23:45 by tidadi            #+#    #+#             */
/*   Updated: 2018/11/08 20:23:53 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *nptr;

	nptr = (void *)malloc(size);
	if (nptr == NULL)
		return (NULL);
	ft_bzero(nptr, size);
	return (nptr);
}
