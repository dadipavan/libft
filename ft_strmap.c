/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:43:29 by tidadi            #+#    #+#             */
/*   Updated: 2018/11/08 21:43:39 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*result;

	i = 0;
	if (!s || !f || ((result = ft_strdup(s)) == NULL))
		return (NULL);
	while (result[i])
	{
		result[i] = f(result[i]);
		i++;
	}
	return (result);
}
