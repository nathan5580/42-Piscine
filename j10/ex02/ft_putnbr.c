
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int ft_map(int *tab, int lenght, int(*f)(int))
{
	int i;
	int *tab2;

	i = 0;
	tab2 = (int*)malloc(sizeof(int*) * lenhgt);
	while (i < lenght)
	{
		tab2[i] = f(tab[i]);
		i++;
	}
}

int main()
{
	ft_map(tab, -1234567890, &ft_putnbr);
	return (0);
}
