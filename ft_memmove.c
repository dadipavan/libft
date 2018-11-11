/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:32:06 by tidadi            #+#    #+#             */
/*   Updated: 2018/11/08 20:32:17 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src2;
	char	*dstt;
	char	*srcc;
	size_t	i;

	if (len <= 0 || !(src2 = ft_memalloc(len)))
		return (dst);
	i = 0;
	dstt = dst;
	srcc = (char *)src;
	while (i < len)
	{
		src2[i] = srcc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dstt[i] = src2[i];
		i++;
	}
	return (dst);
}
