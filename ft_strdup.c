/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:25:33 by tidadi            #+#    #+#             */
/*   Updated: 2018/11/08 21:25:43 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*nstr;

	nstr = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (s1[i])
		{
			nstr[i] = s1[i];
			i++;
		}
		nstr[i] = '\0';
		return (nstr);
	}
}
