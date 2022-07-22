#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	private:
		std::string type;

	public:
		void	set_type(const std::string& newType);
		const std::string&	get_type(void) const;
		Weapon(std::string type);
		~Weapon();
};

#endif