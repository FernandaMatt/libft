/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaetano <fernandacunha@id.uff.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:49:44 by fcaetano          #+#    #+#             */
/*   Updated: 2022/05/09 15:49:55 by fcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >='A' && c<= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int i;
	unsigned char c;

	i = 0;
	while (i <= 255)
	{
		c = i;
		if ((isalnum(c) != 0 && ft_isalnum(c) == 0) || (isalnum(c) == 0 && ft_isalnum(c) != 0))
		{
			printf("Error! \nchar {%c} : ascii {%d} ERROR\nisalnum: %d\nft_isalnum: %d", c, c, isalnum(c), ft_isalnum(c));
			return (0);
		}
		printf("char {%c} : ascii {%d} OK\n", c, c);
		i++;
	}
	return (printf("OK!"));
	return (0);
} */
