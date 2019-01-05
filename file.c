#include	<unistd.h>
#include	<stdlib.h>
#include	<stddef.h>

#include	<stdio.h>
#include	"book.h"

size_t	ft_strlen(const char *str)
{
	size_t	ret;

	ret = 0;
	while (*(str++) != '\0')
		ret++;

	return (ret);
}

void	ft_putstr(const char *str)
{
	write(1, str, ft_strlen(str));
}

char	*ft_strdup(const char *str)
{
	char	*dupstr;
	char	*beg_dupstr;

	dupstr = (char *)(malloc((ft_strlen(str) + 1) * sizeof (char)));
	beg_dupstr = dupstr;
	while (*str != '\0')
		*(dupstr++) = *(str++);

	*dupstr = '\0';
	return (beg_dupstr);
}

void	init_entry(t_entry entry, const char *name, const char *tel_num)
{
	entry.name = ft_strdup(name);
	entry.tel_number = ft_strdup(tel_num);
}

void	show_book(t_book *book, size_t nb_entries)
{
	size_t	count;

	count = 0;
	while (count < nb_entries)
	{
		ft_putstr("Name: ");
		ft_putstr(((book->entries)[count]).name);
		ft_putstr("Tel: ");
		ft_putstr(((book->entries)[count]).tel_number);
		count++;
	}
}

book_add_entry(t_book *book, const char *name, const char *tel)
{

}

int		main(void)
{
	t_book	*book;
	
	book = (t_book *)(malloc(sizeof (t_book)));
	init_entry(arr[0], "Jean", "0123456789");
	init_entry(arr[1], "Albert", "0678910111");
	init_entry(arr[2], "Josiane", "0789101112");
	book->entries = arr;

	show_book(book, 3);
	free(book);
	return (0);
}

