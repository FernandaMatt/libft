#include <stdlib.h>

static int	ft_mod(int n)
{
	if (n >= 0)
		return (n);
	return (n * -1);
}

static int	ft_strsize(int n)
{
	int size;

	size = 1;
	if (n < 0)
		size++;
	while (n/10 < -1 || n/10 > 1)
	{
		size++;
		n /= 10;
	}
	return(size);
}

char	*ft_itoa(int n)
{
	int size;
	char *ret;

	size = ft_strsize(n);
	ret = malloc(size * sizeof(char));
	if (!ret)
		return (ret);
	ret[size--] = 0;
	while (n < -1 || n > 1)
	{
		ret[size--] = ft_mod(n % 10) + '0';
		n /= 10;
	}
	if (size == 0)
		ret[size] = '-';
	return (ret);
}

#include <stdio.h>
int main(void)
{
	int n = -2147483648;

	printf("%s\n", ft_itoa(n));
}
