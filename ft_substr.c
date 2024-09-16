/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malde-ch <malo@chato.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:20:50 by malde-ch          #+#    #+#             */
/*   Updated: 2024/09/16 17:03:18 by malde-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = (char *)malloc(len + 1);
	if (!s || !substr)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	s += start;
	ft_strlcpy(substr, s, len + 1);
	return (substr);
}
