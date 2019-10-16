/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: priviere <priviere@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 14:25:12 by priviere     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 17:38:35 by priviere    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "string.h"
/*
char **ft_split(char const *s, char c)
{
    int     i;
    int     a;
    int     j;
    int     tab[45];
    char    str[3][13];
    int t;
    int k;
    
    i = 0;
    j = 1;
// mets l'indice i des j separateurs dans un tableau d'int
    tab[0] = 0;
    while(s[i] != '\0')
    {
        if (s[i] == c)
        {
            tab[j] = i;
            printf("\n%d", tab[j]);
            j++;
            k = j;
        }
        i++;
    }
// boucler sur la 1ere dim du tableau de char
    j = 0;
    while (j < k)
    {
        a = 0;
        write(1, "\nTEST1\n", 7);
        t = (strlen(s) - tab[j]);
        printf("\nstrlen(s) = %d\n", strlen(s));
        printf("tab[j] = %d\n", tab[j]);
        printf("t = %d\n", t);
        while(a != (strlen(s) - tab[j]))
        {
            str[j][a] = s[a];
            printf("%c", str[j][tab[j]]);
            a++;
        }
        j++;
    }
    return (tab[j]);
}

int main()
{
    char const *s = "salut, comment tu vas, moi bien";
    char c = ',';

    ft_split(s, c);
}
*/