/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:29:47 by tidadi            #+#    #+#             */
/*   Updated: 2018/11/08 20:29:56 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	if (!n)
		return (dst);
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (n--)
	{
		*dst2++ = *src2++;
	}
	return (dst);
}
