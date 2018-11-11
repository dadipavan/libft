/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:33:20 by tidadi            #+#    #+#             */
/*   Updated: 2018/11/08 20:33:29 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	c2;
	size_t			i;
	char			*b2;

	c2 = (unsigned char)c;
	i = 0;
	b2 = (char *)b;
	while (i != len)
		b2[i++] = c2;
	return (b);
}
