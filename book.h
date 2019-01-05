#ifndef		__BOOK_H__
 #define	__BOOK_H__

 size_t		ft_strlen(const char *str);
 void		ft_putstr(const char *str);

 typedef struct		s_entry
 {
	char			*name;
	char			*tel_number;
	struct s_entry	*next_entry;
 }					t_entry;

 typedef struct		s_book
 {
	t_entry			*entries;
 }					t_book;
#endif
