/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: priviere <priviere@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 14:25:12 by priviere     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/18 14:26:23 by priviere    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int *ft_find_sep(char const *s, char c)
{
    int     i;
    int     j;
    int     *tab;
    
    i = 0;
    j = 1;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            j++;
        i++;
    }
    if (!(tab = malloc(sizeof(int) * (j + 1))))
        return (NULL);
    j = 1;
    i = 0;
    tab[0] = 0;
    while(s[i] != '\0')
    {
        if (s[i] == c)
        {
            tab[j] = i;
            j++;
        }
        i++;
    }
    if (j - 1 > 0)
    {
        if (tab[j - 1] == 0)
            return (NULL);
    }
    tab[j] = -1;
    return (tab);
}

char **ft_fill(char const *s, int *tab)
{
    char **str;
    int i;
    int j;
    int a;
    int k;

    i = 0;
    j = 0;
    a = 0;
    k = 0;

    while (tab[i] != -1)
        i++;

    if(!(str = (char **)malloc(sizeof(char *) * (i + 1))))
        return (NULL);

    while (k <= i)
    {
        if (!(str[k] = (char *)calloc(i + 1, sizeof(char) * (strlen(s)))))
           return (NULL);
        k++;
    }

    i = 0;
    while (s[i] != '\0' && tab[j] != -1)
    {
        k = 0;
        while (i != tab[j + 1] && s[i] != '\0')
        {
            str[a][k] = s[i];
            i++;
            k++;
        }
        str[a][k] = '\0';
        a++;
        j++;
        i++;
    }
    str[a] = NULL;
    return (str);
}

char    **ft_split(char const *s, char c)
{
    int *tab;
    char **str;
    int i;

    tab = ft_find_sep(s, c);
    str = ft_fill(s, tab);
    i = 0;
    return (str);
}
