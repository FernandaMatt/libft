/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaetano <fernandacunha@id.uff.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:51:25 by fcaetano          #+#    #+#             */
/*   Updated: 2022/05/23 19:20:29 by fcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src,	size_t destsize)
{
	size_t	s_len;
	size_t	offset;
	size_t	i;

	s_len = ft_strlen(src);
	offset = ft_strlen(dest);
	i = 0;
	if (destsize == 0)
		return (s_len + destsize);
	s_len = ft_strlen(src);
	while (src[i] && ((offset + i) < destsize - 1))
	{
		dest[offset + i] = src[i];
		i++;
	}
	if (ft_strlen(dest) <= destsize)
		dest[offset + i] = '\0';
	if (destsize > offset)
		return (s_len + offset);
	else
		return (s_len + destsize);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char *dest;
	char *src1 = (char *)"lorem ipsum dolor sit amet";
	char *src2 = (char *)"lorem ipsum dolor sit amet";
	ft_memset(dest, 'r', 15);
    printf(" --- Função ft_original ---\n");
	printf("Valor retornado: %lu\n", ft_strlcat(dest, src1, 5));
    printf(" ---  Função original   ---\n");
	printf("Valor retornado: %lu\n", strlcat(dest, src2, 5));
	printf("ft_original: %s\n\n", src1);
	printf("original: %s\n\n", src2);
    return(0);
} */