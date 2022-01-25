void ft_swap(char *s1, char *s2)
{
    char temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int ft_cmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}
void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
    int i;
    int j;

    i = 0;
    cmp = ft_cmp;
    while (tab[i])
    {
        j = i + 1;
        while(tab[j])
        {
            if(cmp(tab[i], tab[j]) > 0)
                ft_swap(tab[i], tab[j]);
            j++;
        }
        i++;
    }
}
