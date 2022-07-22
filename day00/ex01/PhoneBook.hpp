/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasian <tasian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:22:28 by tasian            #+#    #+#             */
/*   Updated: 2022/01/20 15:59:24 by tasian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

# define PLUG	"          "
# define max_size 8

	class	contact
	{

		private:
				bool is_exist;
				int index;
				std::string	name;
				std::string	surname;
				std::string	nickname;
				std::string	phone_number;
				std::string	dankest_secret;
		public:
				contact();
				bool		exist(void);
				int 		get_index();
				std::string	get_name(bool mode);
				std::string	get_surname(bool mode);
				std::string	get_nickname(bool mode);
				std::string	get_number(bool mode);
				std::string	get_secret(bool mode);
				void		add_contact(int index, std::string name, std::string surname, std::string nickname, std::string phone_number);
				void		add_secret(std::string dankest_secret);
	};

#endif