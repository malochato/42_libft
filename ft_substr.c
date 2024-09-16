/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malde-ch <malo@chato.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:20:50 by malde-ch          #+#    #+#             */
/*   Updated: 2024/09/16 16:13:52 by malde-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = (char *)malloc(len + 1);
	if(!s || !substr)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	s += start;
	ft_strlcpy(substr, s, len + 1);
	return (substr);
}

#include <stdio.h>

int main(int argc, char ** argv)
{
	int i = 1;
	while(i != argc)
	{
		printf("Valeur: |%s|, pointeur: |%p|\n", argv[i], argv[i]);
		printf("Valeur: |%s|, pointeur: |%p|\n\n", ft_substr(argv[i], 3, 15), ft_substr(argv[i], 2, 6));
		i++;	
	}
	return (0);
}
