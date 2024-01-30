int ft_strlen(char *str)
{
    int counter;
    int i;

    counter = 0;
    i = 0;
    while (str[i] != '/0')
    {
        counter++;
        i++;
    }
    return counter;
}
