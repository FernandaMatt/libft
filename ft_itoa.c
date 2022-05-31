/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaetano <fernandacunha@id.uff.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:27:28 by fcaetano          #+#    #+#             */
/*   Updated: 2022/05/31 18:52:01 by fcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t size;
	int div;
	char *ret;

	div = 10;
	size = 1;
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n / div > 1)
	{
		size++;
		div *= 10;
	}
	ret = malloc((size) * sizeof(int));
	ret[size--] = 0;
	while (n > 1)
	{
		ret[size--] = (n % 10) + '0';
		n /= 10;
	}
	if (!size)
		ret[size] = '-';
	return (ret);
}

/*#include <stdio.h>
int main(void)
{
	int n = 425;

	printf("%s\n", ft_itoa(n));
}
*/
