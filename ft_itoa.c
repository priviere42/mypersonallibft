/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: priviere <priviere@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/18 18:29:19 by priviere     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/18 19:30:13 by priviere    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int ft_length(int nb)
{
    int len;
    
    len = 0;
    if (nb < 0)
    {
        nb = nb * -1;
        len++;
    }
    while (nb > 0)
    {
        nb = nb / 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int nb)
{
    int len;
    char *str;
    int n;

    n = nb;
    len = ft_length(n);
    if (!(str = malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str[len] = '\0';
    if (n == 0)
    {
        str[0] = '0';
        return (str);
    }
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
    return (str);
}
