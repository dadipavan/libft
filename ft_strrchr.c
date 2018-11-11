/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:49:48 by tidadi            #+#    #+#             */
/*   Updated: 2018/11/08 21:49:56 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (c == '\0')
		return (char *)(&s[ft_strlen(s)]);
	if (i != 0)
	{
		while (s[i] != (char)c && i != 0)
			i--;
		if (s[i] == (char)c)
			return (char *)(&s[i]);
	}
	return (NULL);
}
