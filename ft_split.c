/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaetano <fernandacunha@id.uff.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:47:30 by fcaetano          #+#    #+#             */
/*   Updated: 2022/05/30 19:46:54 by fcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	size_t 	i;
	char 	*str;
	char 	**ret;
	size_t	nsep;
	size_t	iret;

	nsep = 0;
	i = 0;
	if (!s)
	{
		ret = malloc(sizeof(char *));
		*ret = NULL;
		return (ret);
	}
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
	ret = malloc((nsep + 2) * sizeof(char *));
	if (ret == NULL)
		return (ret);
	ret = &str;
	i = 0;
	iret = 1;
	while (i < ft_strlen(s))
	{
		if (str[i] == 0)
		{
			ret[iret] = &str[i+1];
			iret++;
		}
		i++;
	}
	ret[iret] = NULL;
	return (ret);
}

/*#include <stdio.h>
int main(void)
{
	char test[] = "./a.out test1 test2 test3";
	char sep = ' ';
	char **ret;

	ret = ft_split(test, sep);
	while(*ret)
	{
		printf("%s\n", *ret++);
	}
}*/
