/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:48:13 by tidadi            #+#    #+#             */
/*   Updated: 2018/11/08 21:48:23 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*nstr;
	size_t	i;

	nstr = (char *)malloc(sizeof(*nstr) * size + 1);
	if (nstr == NULL)
		return (NULL);
	i = 0;
	while (nstr[i])
	{
		nstr[i] = '\0';
		i++;
	}
	return (nstr);
}
