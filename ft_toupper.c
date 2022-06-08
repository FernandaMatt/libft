/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaetano <fernandacunha@id.uff.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:00:20 by fcaetano          #+#    #+#             */
/*   Updated: 2022/05/09 16:00:35 by fcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/* #include <stdio.h>
int main(void)
{
    unsigned char c;

    c = 'z';
    printf("antes: %c\n", c);
    printf("depois: %c\n", ft_toupper(c));
} */