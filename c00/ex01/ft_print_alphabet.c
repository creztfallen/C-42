#include <unistd.h>
void ft_print_alphabet(void)
{
    char a;

    a = 97;
    while (a <= 122)
    {
        write(1, &a, 1);
        a++;
    }
}

int main()
{
    ft_print_alphabet();
    return (0);
}