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

size_t 	ft_strlcat(char *dest, const char *src,	size_t destsize)
{
	size_t	s_len;
	size_t	offset;
	size_t	i;

	s_len = ft_strlen(src);
	offset = ft_strlen(dest);
	i = 0;
	while (src[i] && ((offset + i) != destsize - 1))
	{
		dest[offset + i] = src[i];
		i++;
	}
	dest[offset + i] = '\0';
	return (s_len + offset);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
    char string1[60] = "Tinha uma pedra no caminho.";
    char string2[60] = "Tinha uma pedra no caminho.";
    char stringsrc[] = " No caminho tinha uma pedra.";
	size_t sizedest = 60;
    printf(" --- Função ft_original ---\n");
	printf("Valor retornado: %lu\n", ft_strlcat(string1, stringsrc, sizedest));
	printf("%s\n\n", string1);
    printf(" ---  Função original   ---\n");
	printf("Valor retornado: %lu\n", strlcat(string2, stringsrc, sizedest));
	printf("%s\n\n", string2);
    return(0);
} */
