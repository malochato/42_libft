/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malde-ch <malo@chato.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:28:38 by malde-ch          #+#    #+#             */
/*   Updated: 2024/09/13 18:42:05 by malde-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == 0)
	{
		return ((char *)big);
	}
	i = 0;
	while (big[i] && i <= len)
	{
		j = 0;
		while (big[i + j] && little[j] && big[i + j] == little[j])
		{
			j++;
		}
		if (!little[j] && len > i + j)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
