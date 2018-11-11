/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:52:19 by tidadi            #+#    #+#             */
/*   Updated: 2018/11/08 21:52:32 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		mark;

	i = 0;
	if (s2[i] == '\0')
		return (char *)(s1);
	while (s1[i])
	{
		j = 0;
		mark = -1;
		if (s1[i] == s2[j])
			mark = i;
		while (s1[i] == s2[j] && s2[j] != '\0')
		{
			if (s2[j + 1] == '\0')
				return (char *)&s1[mark];
			i++;
			j++;
		}
		if (mark != -1)
			i = mark;
		i++;
	}
	return (NULL);
}
