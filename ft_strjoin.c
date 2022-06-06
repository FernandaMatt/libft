/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaetano <fernandacunha@id.uff.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:23:52 by fcaetano          #+#    #+#             */
/*   Updated: 2022/05/30 14:24:59 by fcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *newstr;

	if (!s1 || !s2)
		return (NULL);
	newstr = malloc(ft_strlen((char *)s1)+ft_strlen((char *)s2)+1);
	if (!newstr)
		return (newstr);
	ft_strlcpy(newstr, s1, ft_strlen((char *)s1)+1);
	newstr += ft_strlen((char *)s1);
	ft_strlcpy(newstr, s2, ft_strlen((char *)s2)+1);
	return (newstr - ft_strlen((char *)s1));
}

/* #include <stdio.h>
int main (void)
{
	char *strs[3];

	strs[0] = "Pedra";
	strs[1] = "Papel";
	strs[2] = "e Tesoura";
	printf("%s\n", ft_strjoin(strs[1], strs[2]));
	return (0);
} */
