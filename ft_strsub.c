/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 23:05:50 by tidadi            #+#    #+#             */
/*   Updated: 2018/11/10 19:32:54 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	if (!s)
		return (NULL);
	new_str = ft_strnew(len);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len)
		*(new_str + i++) = *(s + start++);
	return (new_str);
}
