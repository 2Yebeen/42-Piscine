int		ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
	while (s1[i] == s2[i] && s1[i])
        i++;
	return (*s1 - *s2);
}

void ft_swap(char *s1, char *s2)
{
    char temp;

    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

void ft_sort_string_tab(char **tab)
{
    int i;
    int j;
    char (*fp)(char, char);

    i = 0;
    while (tab[i])
    {
        j = i + 1;
        while (tab[j])
        {
            if(ft_strcmp(tab[i], tab[j]) > 0)
                ft_swap(tab[i], tab[j]);
            j++;
        }
        i++;
    }
}
