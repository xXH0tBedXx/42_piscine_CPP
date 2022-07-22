/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasian <tasian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:22:42 by tasian            #+#    #+#             */
/*   Updated: 2022/01/20 22:45:12 by tasian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
int main(void)
{
	std::string	command, name, surname, nicname, phone_number, dankest_secret;
	contact		user[max_size];
	int 		counter = -1;

	while(command.compare("EXIT"))
	{
		std::cout << "Please enter your command" << std::endl;
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(0);
		if (!(command.compare("ADD")))
		{
			counter++;
				if (counter % max_size == 0 && counter > 7)
					std::cout << "PhoneBook is full!! Oldest entry will be deleted" << std::endl;	
			std::cout << "enter your first name: ";
			std::getline(std::cin, name);
			if (std::cin.eof())
				exit(0);
			std::cout << "enter your second name: ";
			std::getline(std::cin, surname);
			if (std::cin.eof())
				exit(0);
			std::cout << "enter your nickname (if nickname has more than one word -> nicname must be in quotes): ";
			std::getline(std::cin, nicname);
			if (std::cin.eof())
				exit(0);
			std::cout << "enter your phone number: ";
			std::getline(std::cin, phone_number);
			if (std::cin.eof())
				exit(0);
			user[counter % max_size].add_contact(counter % max_size, name, surname, nicname, phone_number);
			std::cout << std::endl << "finally, enter your dankest secret: ";
			std::getline(std::cin ,dankest_secret);
			user[counter % max_size].add_secret(dankest_secret);
			if (std::cin.eof())
				exit(0);
		}
		else if (!(command.compare("SEARCH")))
		{
			std::cout << "|----------|----------|----------|----------|" << std::endl;
			std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
			std::cout << "|----------|----------|----------|----------|" << std::endl;
			for (int i = 0; i  < max_size; i++)
			{
				if (user[i].exist())
				{
					std::cout << "|";
					std::cout.width(10);
					std::cout.setf(std::ios_base::right);
					std::cout << (user[i].exist() ? user[i].get_index() : -1) << "|";
					std::cout.width(10);
					std::cout.setf(std::ios_base::right);
					std::cout << (user[i].exist() ? user[i].get_name(1) : PLUG) << "|";
					std::cout.width(10);
					std::cout.setf(std::ios_base::right);
					std::cout << (user[i].exist() ? user[i].get_surname(1) : PLUG) << "|";
					std::cout.width(10);
					std::cout.setf(std::ios_base::right);
					std::cout << (user[i].exist() ? user[i].get_nickname(1) : PLUG) << "|";
					std::cout << std::endl;
					std::cout << "|----------|----------|----------|----------|" << std::endl;
				}
			}
			std::cout << "enter index of person for more details or something else for exit to main menu\n";
			std::getline(std::cin, command);
			int i;
			try
			{
				i = std::stoi(command);
			}
			catch(const std::exception& e)
			{
				continue;	
			}
			if (i >= 0 && i <= 7)
			{
				std::cout << user[i].get_name(0) << std::endl;
				std::cout << user[i].get_surname(0) << std::endl;
				std::cout << user[i].get_nickname(0) << std::endl;
				std::cout << user[i].get_number(0) << std::endl;
				std::cout << user[i].get_secret(0) << std::endl << std::endl;
			}
		}
	}
	std::cout << "see ya later!" << std::endl;
	return (0);
}
