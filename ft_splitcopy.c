/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaetano <fernandacunha@id.uff.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:47:30 by fcaetano          #+#    #+#             */
/*   Updated: 2022/05/30 19:10:42 by fcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t ft_strlen(const char *str)
{
	size_t n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

char	*ft_strdup(const char *src)
{
	char	*ret;
	int		c;

	c = ft_strlen(src) + 1;
	ret = malloc(c * sizeof(*ret));
	if (!ret)
		return (ret);
	c = 0;
	while (src[c])
	{
		ret[c] = src[c];
		c++;
	}
	ret[c] = 0;
	return (ret);
}

char **ft_split(char const *s, char c)
{
	size_t 	i;
	char 	*str;
	char 	**ret;
	size_t	nsep;
	size_t	iret;

	nsep = 0;
	i = 0;
	str = ft_strdup(s);
	while(str[i])
	{
		if (str[i] == c)
		{
			nsep++;
			str[i] = 0;
		}
		i++;
	}
	ret = malloc((nsep + 2) * 8);
	if (ret == NULL)
		return (ret);
	ret = &str;
	i = 0;
	iret = 1;
	while (i < ft_strlen(s))
	{
		if (str[i] == 0)
		{
			ret[iret] = &str[i + 1];
			iret++;
		}
		i++;
	}
	ret[iret] = NULL;
	return (ret);
}

#include <stdio.h>
int main(void)
{
	char test[] = "./a t1";
	char sep = ' ';
	char **ret;

	ret = ft_split(test, sep);
	while(*ret)
	{
		printf("%s\n", *ret++);
	}
}
