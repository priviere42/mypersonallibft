/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: priviere <priviere@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 14:25:12 by priviere     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 18:01:14 by priviere    ###    #+. /#+    ###.fr     */
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
//    printf("Voila j : %d", j);
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
    tab[j] = '\0';
 //   printf("\ntab[1] avant ft_fill = %d", tab[1]);

    return (tab);
}

char **ft_fill(char const *s, int *tab)
{
    char **str;
    int i;
    int j;
    int a;
    int k;

    i = 1;
    j = 0;
    a = 0;
    k = 0;
  //  printf("\ntab[1] avant boucle = %d", tab[1]);

    while (tab[i])
        i++;
    // printf("\ntab[1] entre deux = %d", tab[1]);

    if (!(str = (char **)malloc(sizeof(char *) * (i + 1))))
        return (NULL);
    // printf("\nTEST 3tab[1] = %d", tab[1]);

    while (str[k])
    {
        if (!(str[k] = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
           return (NULL);
        k++;
    }
 //       printf("\nTEST 3tab[0] = %d", tab[0]);

    i = 0;
    while (s[i] != '\0')
    {
        k = 0;
        while (i != tab[j + 1] && s[i] != '\0')
        {
            // printf("\ni = %d", i);
            // printf("\ntab[j + 1] = %d", tab[0]);
            str[a][k] = s[i];
      //      printf("\n%c", str[a][k]);
            i++;
            k++;
        }
        str[a][k] = '\0';
        // printf("\n%s", str[a]);
        a++;
        j++;
        i++;
    }
    str[a - 1] = 0;
    // printf("\nVoici str[0] : %s", str[0]);
    // printf("\nVoici str[1] : %s", str[1]);
    // printf("\nVoici str[2] : %s", str[2]);

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
    while (str[i])
    {
        // printf("\n boucle dans ftsplit : %s", str[i]);
        i++;
    }
    return (str);
}