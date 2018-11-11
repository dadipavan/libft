/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:28:49 by tidadi            #+#    #+#             */
/*   Updated: 2018/11/08 20:29:05 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s22;
	unsigned char	*s11;

	if (!s1 && !s2 && !n)
		return (0);
	s22 = (unsigned char *)s2;
	s11 = (unsigned char *)s1;
	i = 0;
	while (n--)
	{
		if (s11[i] != s22[i])
			return (s11[i] - s22[i]);
		i++;
	}
	return (0);
}
