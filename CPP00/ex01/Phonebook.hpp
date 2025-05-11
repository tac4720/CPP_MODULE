#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#endif

#include "Contact.hpp"

class Phonebook{
	private:
		Contact contacts[8];
		int		num_contacts;
		int		oldest_index;
	public:
		Phonebook();
		bool 	add();
		void	search();
		void	display();
		void	display_content(int index);
		int		get_num_contacts();
		int		get_oldest_index();
};
