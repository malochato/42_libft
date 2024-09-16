/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malde-ch <malo@chato.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:16:15 by malde-ch          #+#    #+#             */
/*   Updated: 2024/09/12 19:11:35 by malde-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	dest_size;
	size_t	src_size;
	size_t	i;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	if (len <= dest_size)
		return (dest_size + src_size);
	i = 0;
	dest += dest_size;
	while ((dest_size + i++ < len - 1) && *src)
		*dest++ = *src++;
	*dest = 0;
	return (dest_size + src_size);
}
