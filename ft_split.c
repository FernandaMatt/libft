/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaetano <fernandacunha@id.uff.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:47:30 by fcaetano          #+#    #+#             */
/*   Updated: 2022/05/31 13:12:06 by fcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* typedef unsigned long size_t;

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

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize == 0)
		return(ft_strlen((char *)src));
	while (src[i] && i < destsize - 1 && i != destsize)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen((char *)src));
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (start >= ft_strlen(s))
		return(ft_strdup(""));
	substr = malloc((len+1)*sizeof(*s));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, &s[start], len+1);
	return (substr);
} */

#include "libft.h"

static int	count_words(char *str, char c)
{
	int	nword;

	nword = 0;
	while (*str)
	{
		if (*str != c)
		{
			nword++;
			while (*str != c && *str)
				str++;
		}
		else
			str++;
	}
	return (nword);
}

static int	get_words(char **pptr, char *str, char c)
{
	int i;
	int len;

	i = 0;
	while(*str)
	{
		if (*str != c)
		{
			len = 0;			
			while (*str != c && *str)
			{
				str++;
				len++;
			}
			pptr[i++] = ft_substr(str - len, 0, len);
			if (!pptr[i - 1])
				return (0);
		}
		else
			str++;
	}
	return (1);
}

static void	ft_free(char **pptr, size_t size)
{
	while (size > 0)
	{
		free(pptr[size - 1]);
		size--;
	}
	pptr = NULL;
}

char **ft_split(char const *s, char c)
{
	char **ret;
	int nwords;

	
	if (s == NULL)
		return(NULL);
	nwords = count_words((char *)s, c);
	ret = malloc((nwords + 1) * sizeof(*ret));
	if (!ret)
		return (ret);
	ret[nwords] = NULL;
	if (!get_words(ret, (char *)s, c))
		ft_free(ret, nwords + 1);
	return (ret);
}

/* #include <stdio.h>
int main(void)
{
	char *test = "./a.out var1 var2 var3";
	char sep = ' ';
	char **ret;

	ret = ft_split(test, sep);
	while(*ret)
	{
		printf("%s\n", *ret++);
	}
} */
