/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:26:59 by tidadi            #+#    #+#             */
/*   Updated: 2018/11/08 20:27:19 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c2;
	size_t			i;
	unsigned char	*s2;
	void			*ptr;

	c2 = (unsigned char)c;
	s2 = (unsigned char *)s;
	i = 0;
	while (i != n && s2[i] != c2)
		i++;
	if (i == n)
		return (NULL);
	ptr = (void *)&s2[i];
	return (ptr);
}
