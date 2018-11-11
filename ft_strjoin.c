/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:31:27 by tidadi            #+#    #+#             */
/*   Updated: 2018/11/10 19:54:43 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*result;

	result = NULL;
	if (str1 == 0 || str2 == 0)
		return (NULL);
	result = ft_strnew(ft_strlen(str1) + ft_strlen(str2));
	if (result)
	{
		ft_strcpy(result, str1);
		ft_strcat(result, str2);
		return (result);
	}
	else
		return (NULL);
}
