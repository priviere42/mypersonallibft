/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: priviere <priviere@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/18 18:29:19 by priviere     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 14:43:44 by priviere    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static long	ft_nblen(long nb)
{
	long	len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	if (nb == 0)
		len++;
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*ft_check_exceptions(long n, char *str)
{
	if (n == 2147483648)
	{
		str = "2147483648";
		return (str);
	}
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	return (0);
}

char		*ft_itoa(int nb)
{
	int		len;
	char	*str;
	long	n;

	n = nb;
	len = ft_nblen(n);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	if (!ft_check_exceptions(n, str))
	{
		if (n < 0)
		{
			n = n * -1;
			str[0] = '-';
		}
		while (n > 0)
		{
			str[len - 1] = (n % 10) + 48;
			n = n / 10;
			len--;
		}
	}
	return (str);
}
